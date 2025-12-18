#include <stdio.h>

// Funcao que soma dois numeros
int soma(int a, int b) {
    return a + b;
}

int main() {
    int x, y, resultado;

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    resultado = soma(x, y);

    printf("Resultado da soma: %d\n", resultado);

    return 0;
}
