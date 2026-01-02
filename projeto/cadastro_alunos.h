#ifndef CADASTRO_ALUNOS
#define CADASTRO_ALUNOS
#include <stdio.h>

//ESTRUTUTA CRIADA PARA UTILIZAR EM CADASTRO_ALUNOS.C
struct Aluno {
    char nome[50];
    int idade;
};

//PROTÓTIPO DAS FUNÇÕES SALVAS EM FUNCOES_CADASTRO.C
void menu();
void cadastrarAluno();
void salvarAluno(struct Aluno aluno);
void listarAlunos();
void editarAluno();
void removerAluno();

#endif
