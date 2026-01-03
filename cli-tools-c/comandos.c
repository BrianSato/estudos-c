#include<stdio.h>
#include"comandos.h"

//LISTA DE FUNÇÕES UTILIZADA
int contaLinhas(const char *nomeArquivo){
	FILE *arquivo;
	int linhas = 0;
	char buffer[256];

	arquivo = fopen(nomeArquivo, "r");
	if(arquivo == NULL){
		printf("Arquito não encontrado");
		return 1;
	}
	while(fgets(buffer,sizeof(buffer),arquivo) != NULL){
	    linhas++;
	  }
	return linhas;
	fclose(arquivo);
}
