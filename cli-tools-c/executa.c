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
void executaHelp() {
    printf("CLI-TOOLS-C\n");
    printf("Ferramenta simples para contagem de texto\n\n");

    printf("Uso:\n");
    printf("  cli-tools <arquivo> <comando>\n\n");

    printf("Comandos disponiveis:\n");
    printf("  -l            Conta linhas\n");
    printf("  -w            Conta palavras\n");
    printf("  -c            Conta caracteres\n");
    printf("  -a            Mostra todas as contagens\n");
    printf(" --help    Mostra esta ajuda\n\n");

    printf("Exemplos:\n");
    printf("  cli-tools teste.txt -l\n");
    printf("  cli-tools teste.txt -a\n");
}

void erroUso() {
    printf("Erro: uso incorreto do programa.\n\n");
    printf("Use:\n");
    printf("  cli-tools <arquivo> <comando>\n\n");
    printf("Para ajuda, use:\n");
    printf("  cli-tools --help\n");
}
