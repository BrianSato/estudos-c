// Exemplo basico de leitura e escrita em arquivos em C

#include <stdio.h>

int main() {
    FILE *arquivo;
    char texto[100];

    // Escrita no arquivo
    arquivo = fopen("exemplo.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

    fprintf(arquivo, "%s", texto);
    fclose(arquivo);

    // Leitura do arquivo
    arquivo = fopen("exemplo.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    printf("\nConteudo do arquivo:\n");
    fgets(texto, sizeof(texto), arquivo);
    printf("%s", texto);

    fclose(arquivo);

    return 0;
}
