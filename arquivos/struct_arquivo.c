#include <stdio.h>

// Definicao da struct
struct Aluno {
    char nome[50];
    int idade;
};

int main() {
    struct Aluno aluno;
    FILE *arquivo;

    printf("Digite o nome do aluno: ");
    scanf("%49s", aluno.nome);

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);

    arquivo = fopen("alunos.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(arquivo, "%s %d\n", aluno.nome, aluno.idade);
    fclose(arquivo);

    printf("Aluno salvo no arquivo com sucesso.\n");

// Leitura completa do arquivo
    arquivo = fopen("alunos.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }
    
    printf("\nLista de alunos cadastrados:\n");
    
    while (fscanf(arquivo, "%49s %d", aluno.nome, &aluno.idade) != EOF) {
        printf("Nome: %s | Idade: %d\n", aluno.nome, aluno.idade);
    }
    
    fclose(arquivo);
    
   return 0;
}

    
        
