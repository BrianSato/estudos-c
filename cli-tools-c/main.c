#include<stdio.h>
#include<string.h>
#include "comandos.h"


int main(int argc, char *argv[]){

	//VERIFICA SE O ARGUMENTO CONTÉM OS ELEMENTOS NECESSÁRIOS PARA SER EXECUTADO
	if (argc < 3) {
		printf("Uso: %s <arquivo> \n", argv[0]);
		return 1;
	}
	
	executaComando(argv[1],argv[2]);

    return 0;
}
