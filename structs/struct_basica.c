#include <stdio.h>

// Definicao de uma struct simples
struct Pessoa {
    char nome[50];
    int idade;
};

int main() {
    struct Pessoa p;

    printf("Digite o nome: ");
    scanf("%49s", p.nome);

    printf("Digite a idade: ");
    scanf("%d", &p.idade);

    printf("\nDados cadastrados:\n");
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);

    return 0;
}
