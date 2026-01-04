#include<stdio.h>
#include<string.h>
#include "comandos.h"


int main(int argc, char *argv[]){

	//VERIFICA SE O ARGUMENTO CONTÉM OS ELEMENTOS NECESSÁRIOS PARA SER EXECUTADO
	if (argc < 3) {
		printf("Uso: %s <arquivo> \n", argv[0]);
		return 1;
	}
	if(strcmp(argv[2], "-l") == 0){
	    executaLinhas(argv[1]);
	}
	else if(strcmp(argv[2], "-w") == 0){
	    executaPalavras(argv[1]);
	}
	else if(strcmp(argv[2], "-c") == 0){
	    executaCaracteres(argv[1]);
	}
	else{
	    printf("Comando desconhecido\n");
	}

    return 0;
}
