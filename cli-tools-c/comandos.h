#include<stdio.h>
#ifndef COMANDOS_H
#define COMANDOS_H

//PROTÓTIPOS DAS FUNÇÕES COMANDO.C
int contaLinhas(const char *nomeArquivo);
int contaPalavras(const char *nomeArquivo);
int contaCaracteres(const char *nomeArquivo);

//PROTÓTIPOS DAS FUNÇÕES EXECUTA_COMANDO.C
void executaLinhas(const char *arquivo);
void executaPalavras(const char *arquivo);
void executaCaracteres(const char *arquivo);
void executaComando(const char *nomeArquivo,const char *comando);

#endif
