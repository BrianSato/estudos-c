#include<string.h>
#include "comandos.h"

//LISTA DE FUNÇÕES UTILIZADAS
void executaLinhas(const char *arquivo){
	int resultado = contaLinhas(arquivo);

	if(resultado == -1){
		printf("Erro ao abrir o arquivo\n");
		return;
	}
	printf("A quantidade de linhas é : %d\n", resultado);

}
void executaPalavras(const char *arquivo){
	int resultado = contaPalavras(arquivo);

	if(resultado == -1){
		printf("Erro ao abrir o arquivo\n");
		return;
	}
	printf("A quantidade de palavras é : %d\n", resultado);

}
void executaCaracteres(const char *arquivo){
	int resultado = contaCaracteres(arquivo);

	if(resultado == -1){
		printf("Erro ao abrir o arquivo\n");
		return;
	}
	printf("A quantidade de caracteres é : %d\n", resultado);

}
