#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int idade;
};

void menu() {
    printf("\n===== MENU =====\n");
    printf("1 - Cadastrar aluno\n");
    printf("2 - Listar alunos\n");
    printf("3 - Remover aluno\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
}

void cadastrarAluno() {
    struct Aluno aluno;
    FILE *arquivo;

    printf("Digite o nome do aluno: ");
    scanf("%49s", aluno.nome);

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);

    arquivo = fopen("alunos.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arquivo, "%s %d\n", aluno.nome, aluno.idade);
    fclose(arquivo);

    printf("Aluno cadastrado com sucesso!\n");
}

void listarAlunos() {
    struct Aluno aluno;
    FILE *arquivo;

    arquivo = fopen("alunos.txt", "r");
    if (arquivo == NULL) {
        printf("Nenhum aluno cadastrado ainda.\n");
        return;
    }

    printf("\nLista de alunos cadastrados:\n");

    while (fscanf(arquivo, "%49s %d", aluno.nome, &aluno.idade) != EOF) {
        printf("Nome: %s | Idade: %d\n", aluno.nome, aluno.idade);
    }

    fclose(arquivo);
}

void removerAluno() {
    struct Aluno aluno;
    FILE *arquivo, *temp;
    char nomeRemover[50];
    int encontrado = 0;

    printf("Digite o nome do aluno a remover: ");
    scanf("%49s", nomeRemover);

    arquivo = fopen("alunos.txt", "r");
    if (arquivo == NULL) {
        printf("Nenhum aluno cadastrado.\n");
        return;
    }

    temp = fopen("temp.txt", "w");
    if (temp == NULL) {
        printf("Erro ao criar arquivo temporario.\n");
        fclose(arquivo);
        return;
    }

    while (fscanf(arquivo, "%49s %d", aluno.nome, &aluno.idade) != EOF) {
        if (strcmp(aluno.nome, nomeRemover) != 0) {
            fprintf(temp, "%s %d\n", aluno.nome, aluno.idade);
        } else {
            encontrado = 1;
        }
    }

    fclose(arquivo);
    fclose(temp);

    remove("alunos.txt");
    rename("temp.txt", "alunos.txt");

    if (encontrado) {
        printf("Aluno removido com sucesso.\n");
    } else {
        printf("Aluno nao encontrado.\n");
    }
}


int main() {
    int opcao;

    do {
        menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarAluno();
                break;
            case 2:
               listarAlunos();
                break;
            case 3:
                removerAluno();
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 0);

    return 0;
}
