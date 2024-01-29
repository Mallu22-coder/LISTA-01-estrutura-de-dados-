/* Escreva um programa para calcular e imprimir a soma de todos
os múltiplos de 7 partindo de 1 até 100 */

#include <stdio.h>

int main() {
    int soma = 0;

    // Loop para iterar de 1 a 100
    for (int i = 1; i <= 100; i++) {
        // Verifica se o número é múltiplo de 7
        if (i % 7 == 0) {
            // Adiciona o múltiplo de 7 à soma
            soma += i;
        }
    }

    // Imprime a soma dos múltiplos de 7
    printf("A soma dos multiplos de 7 de 1 a 100: %d\n", soma);

    return 0;
}
