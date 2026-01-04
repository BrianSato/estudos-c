#include<stdio.h>
#include"comandos.h"

//LISTA DE FUNÇÕES UTILIZADAS
int contaLinhas(const char *nomeArquivo){
	FILE *arquivo;
	int linhas = 0;
	char buffer[256];

	arquivo = fopen(nomeArquivo, "r");
	if(arquivo == NULL){
		printf("Arquivo não encontrado");
		return 1;
	}
	while(fgets(buffer,sizeof(buffer),arquivo) != NULL){
	    linhas++;
	  }
	fclose(arquivo);
	return linhas;
}

int contaPalavras(const char *nomeArquivo){
	FILE *arquivo;
	int palavras = 0;
	char buffer[256];

	arquivo = fopen(nomeArquivo, "r");
	if(arquivo == NULL){
		printf("Arquivo não encontrado");
		return 1;
	}
	while(fscanf(arquivo,"%s",buffer) == 1){
		palavras ++;
	}
	fclose(arquivo);
	return palavras;
}

int contaCaracteres(const char *nomeArquivo){
	FILE *arquivo;
	int caracteres = 0;
	int c;

	arquivo = fopen(nomeArquivo, "r");
	if(arquivo == NULL){
		printf("Arquivo não encontrado");
		return 1;
	}
	while((c = fgetc(arquivo)) != EOF){
		caracteres ++;
	}
	fclose(arquivo);
	return caracteres;

}
