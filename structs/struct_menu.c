#include <stdio.h>

// Definicao da struct
struct Aluno {
    char nome[50];
    int idade;
};

// Funcao para cadastrar aluno
void cadastrar(struct Aluno *a) {
    printf("Digite o nome: ");
    scanf("%49s", a->nome);

    printf("Digite a idade: ");
    scanf("%d", &a->idade);
}

// Funcao para exibir aluno
void exibir(struct Aluno a) {
    printf("\nAluno cadastrado:\n");
    printf("Nome: %s\n", a.nome);
    printf("Idade: %d\n", a.idade);
}

int main() {
    struct Aluno aluno;
    int opcao;

    printf("1 - Cadastrar aluno\n");
    printf("2 - Exibir aluno\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        cadastrar(&aluno);
    } else if (opcao == 2) {
        exibir(aluno);
    } else {
        printf("Opcao invalida\n");
    }

    return 0;
}
