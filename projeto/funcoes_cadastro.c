#include "cadastro_alunos.h"
#include<string.h>
#include<stdio.h>

//LISTA DE FUNÇÕES UTILIZADAS EM CADASTRO_ALUNOS.C

//MENU PRINCIPAL MOSTRADO NO CONSOLE.
void menu() {
    printf("===== MENU =====\n");
    printf("1 - Cadastrar aluno\n");
    printf("2 - Listar alunos\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
    fflush(stdout);
}
//CADASTRAR ALUNO
void cadastrarAluno() {
    struct Aluno aluno;
    printf("Digite o nome do aluno:");
    fflush(stdout);
    fgets(aluno.nome,sizeof aluno.nome,stdin);
    aluno.nome[strcspn(aluno.nome,"\n")] = '\0';

    printf("Digite a idade do aluno: ");
    fflush(stdout);
    scanf("%d", &aluno.idade);
    getchar();

    salvarAluno(aluno);
    printf("Aluno cadastrado!\n");
}

//SALVAR CADASTRO DO ALUNO EM ARQUIVO
void salvarAluno(struct Aluno aluno) {
    FILE *arquivo = fopen("alunos.txt", "a");
    if (!arquivo) {
        printf("Erro ao abrir arquivo.\n");
        return;
    }
    //fprintf(arquivo,"====LISTA DE ALUNOS=====\n");
    fprintf(arquivo, "Nome: %s\n", aluno.nome);
    fprintf(arquivo,"Idade: %d\n",aluno.idade);
    fprintf(arquivo,"=======================\n");
    fclose(arquivo);
}

//LISTAR OS ALUNOS CADASTRADOS NO CONSOLE.
void listarAlunos() {
	char linha[200];
    FILE *arquivo = fopen("alunos.txt", "r");
    if (!arquivo) {
        printf("Nenhum aluno cadastrado.\n");
        return;
    }

    printf("\n======LISTA DE ALUNOS======\n");
    while (fgets(linha,sizeof(linha),arquivo) != NULL) {
        printf("%s", linha);
    }

    fclose(arquivo);
}
