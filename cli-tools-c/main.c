#include<stdio.h>
#include<string.h>
#include "comandos.h"


int main(int argc, char *argv[]){

	//VERIFICA SE O ARGUMENTO CONTÉM OS ELEMENTOS NECESSÁRIOS PARA SER EXECUTADO
	if (argc < 3) {
		printf("Uso: %s <arquivo> \n", argv[0]);
		return 1;
	}
	//VERIFICA SE CONTÉM O COMANDO EQUIVALENTE AO DEMONSTRADO (NO CASO COMANDO -L)
	if(strcmp(argv[2], "-l") == 0){
		int resultado = contaLinhas(argv[1]);

		if(resultado == -1){
			printf("Erro ao abrir o arquivo\n");
			return 1;
		}
		printf("A quantidade de linhas é : %d\n", resultado);
	}else{
		printf("Comando desconhecido\n");
	}

    return 0;
}
