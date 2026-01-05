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
void executaComando(const char *nomeArquivo,const char *comando){

	if(comando == NULL){
		printf("Nenhum comando informado.");
		return;
	}

	if(strcmp(comando, "-l") == 0){
		executaLinhas(nomeArquivo);
	}
	else if(strcmp(comando, "-w") == 0){
		executaPalavras(nomeArquivo);
	}
	else if(strcmp(comando, "-c") == 0){
		executaCaracteres(nomeArquivo);
	}
	else if(strcmp(comando, "-a") == 0){
		printf("Linhas:%d\n",contaLinhas(nomeArquivo));
		printf("Palavras:%d\n",contaPalavras(nomeArquivo));
		printf("Caracteres:%d\n",contaCaracteres(nomeArquivo));
	}
	else{
		printf("Comando desconhecido\n");
	}
}
