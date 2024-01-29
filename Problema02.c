/*Escreva um programa que converta temperaturas de 30 oC a
50 oC para a escala Fahrenheit espaçados de 1
oC. O programa deve imprimir
uma tabela exibindo as temperaturas nas duas escalas lado a lado. [Dica:
F = C + 32]*/

#include <stdio.h>

int main() {
    // Imprime cabeçalho da tabela
    printf("Celsius\t\tFahrenheit\n");

    // Loop para converter e imprimir temperaturas de 30 a 50 Celsius
    for (int celsius = 30; celsius <= 50; celsius++) {
        // Fórmula de conversão de Celsius para Fahrenheit
        double fahrenheit = celsius + 32;

        // Imprime as temperaturas na tabela
        printf("%d\t\t%.2f\n", celsius, fahrenheit);
    }

    return 0;
}
