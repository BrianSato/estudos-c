#include "cadastro_alunos.h"

int main() {
    int opcao;

    do {
        menu();
        scanf("%d",&opcao);
        getchar();

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
