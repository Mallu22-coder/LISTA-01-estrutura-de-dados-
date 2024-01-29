/*Escreva um programa para calcular e imprimir uma lista de
todos os números primos de 1 a 100.*/

#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool ehPrimo(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    // Imprime cabeçalho
    printf("Numeros primos de 1 a 100:\n");

    // Loop para iterar de 1 a 100 e imprimir números primos
    for (int i = 1; i <= 100; i++) {
        if (ehPrimo(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}