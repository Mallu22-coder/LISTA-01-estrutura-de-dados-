/* Uma aplicação interessante de computadores é desenhar gráficos e gráficos de barras. Escreva um programa que leia cinco números 
(cada*um entre 1 e 30).Para cada número lido, seu programa deve imprimir uma linha contendo aquele número de asteriscos adjacentes. 
Por exemplo, se seu programa lê o número sete, ele deve imprimir ∗ ∗ ∗ ∗ ∗ ∗ */

#include <stdio.h>

int main() {
    int numeros[5];

    // Solicita ao usuário inserir cinco números entre 1 e 30
    printf("Digite cinco numeros (cada um entre 1 e 30):\n");

    for (int i = 0; i < 5; i++) {
        do {
            printf("Numero %d: ", i + 1);
            scanf("%d", &numeros[i]);

            // Verifica se o número está no intervalo válido
            if (numeros[i] < 1 || numeros[i] > 30) {
                printf("Por favor, digite um numero entre 1 e 30.\n");
            }
        } while (numeros[i] < 1 || numeros[i] > 30);
    }

    // Imprime linhas contendo asteriscos com base nos números fornecidos
    printf("\nLinhas de asteriscos:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < numeros[i]; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
