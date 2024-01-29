/*A função fatorial é freqüentemente usada em problemas de
probabilidade. O fatorial é igual ao produto dos inteiros positivos de 1 a n.
Escreva um programa que avalie os fatoriais dos inteiros de 1 a n. Imprima
os resultados em formato tabular*/

#include <stdio.h>

// Função para calcular o fatorial de um número
long long fatorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * fatorial(num - 1);
    }
}

int main() {
    int n;

    // Solicita ao usuário inserir um número
    printf("Digite um numero inteiro para calcular os fatoriais: ");
    scanf("%d", &n);

    // Imprime cabeçalho da tabela
    printf("Numero\t\tFatorial\n");

    // Loop para calcular e imprimir os fatoriais
    for (int i = 1; i <= n; i++) {
        printf("%d\t\t%lld\n", i, fatorial(i));
    }

    return 0;
}