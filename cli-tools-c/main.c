#include<stdio.h>
#include<string.h>
#include "comandos.h"


int main(int argc, char *argv[]){
	//CASO O USUÁRIO NÃO COLOQUEI O NÚMERO DE ARGUMENTOS SUFICIENTE
	if(argc <= 2 &&
	(strcmp(argv[1], "--help") == 0)){
		executaHelp();
		return 0;
	}

	//VERIFICA SE O ARGUMENTO CONTÉM OS ELEMENTOS NECESSÁRIOS PARA SER EXECUTADO
	if (argc < 3) {
		erroUso();
		return 1;
	}

	executaComando(argv[1],argv[2]);

    return 0;
}
