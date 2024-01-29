/*Escreva um programa que imprima a soma, a soma dos quadrados e a soma dos cubos de todos os números naturais de 1 até qualquer
número inserido pelo usuário.*/

#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário inserir um número
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Inicializa as variáveis para as somas
    int soma = 0;
    int soma_quadrados = 0;
    int soma_cubos = 0;

    // Loop para calcular as somas
    for (int i = 1; i <= numero; i++) {
        soma += i;
        soma_quadrados += i * i;
        soma_cubos += i * i * i;
    }

    // Imprime os resultados
    printf("Soma dos numeros naturais de 1 a %d: %d\n", numero, soma);
    printf("Soma dos quadrados de 1 a %d: %d\n", numero, soma_quadrados);
    printf("Soma dos cubos de 1 a %d: %d\n", numero, soma_cubos);

    return 0;
}
