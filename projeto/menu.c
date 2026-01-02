#include<stdio.h>
#include "cadastro_alunos.h"

//MENU PRINCIPAL MOSTRADO NO CONSOLE.
void menu() {
	int opcao;

	do{
	printf("===== MENU =====\n");
    printf("1 - Cadastrar aluno\n");
    printf("2 - Listar alunos\n");
	printf("3- Remover aluno:\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
    fflush(stdout);
    scanf("%d", &opcao);
    getchar();
//SWITCH DE OPÇÕES UTILIZANDO AS FUNÇÕES DE FUNCOES_CADASTRO.C
    switch(opcao){
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
   }while (opcao != 0);
}
