// Exemplo de uso de estruturas condicionais em C

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O numero é positivo\n");
    } else if (numero < 0) {
        printf("O numero é negativo\n");
    } else {
        printf("O numero é zero\n");
    }

    return 0;
}
