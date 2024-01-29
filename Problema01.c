/*Escreva um programa para somar uma sequência de inteiros e
calcular sua média. Suponha que o primeiro inteiro lido com scanf especifique
o número de valores a serem inseridos. Seu programa deve ler apenas um
valor cada vez que scanf é executado. Uma sequência de entrada típica pode
ser:
7 678 234 315 489 536 456 367*/

#include<stdio.h>
int main(){
  int n, i, x, soma, media;
  printf("Digite o número de valores a serem inseridos: ");
  scanf("%d", &n); //especifica o numero de valores que vão ser inseridos

  soma = 0;
  for(i=0; i<n; i++) { //repete n vezes
    printf("Digite um valor: ");
    scanf("%d", &x);
    soma = soma + x; ///adiciona o valor a soma
  }

  media = soma / n; // calcula a media
  printf("A soma de valores e: %d\n", soma);
  printf("A media dos valores e: %d\n", media);
  return 0;

}