#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
};

void menu() {
    printf("\n===== MENU =====\n");
    printf("1 - Cadastrar aluno\n");
    printf("2 - Listar alunos\n");
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
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 0);

    return 0;
}
