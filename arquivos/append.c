#include <stdio.h>

int main() {
    FILE *arquivo;
    char texto[100];

    // Abre o arquivo no modo append (nao apaga o conteudo existente)
    arquivo = fopen("exemplo.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Digite um texto para adicionar ao arquivo: ");
    fgets(texto, sizeof(texto), stdin);

    fprintf(arquivo, "%s", texto);
    fclose(arquivo);

    printf("Texto adicionado com sucesso.\n");

    return 0;
}
