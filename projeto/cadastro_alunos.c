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

int main() {
    int opcao;

    do {
        menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Cadastrar aluno (em breve)\n");
                break;
            case 2:
                printf("Listar alunos (em breve)\n");
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
