/*implementar codigo base, programar algoritmo para teste, 
calcular media, estimar complexidade */

#include<stdio.h>
#include<time.h>
#include<math.h>

int fibonacci(int n){
   if(n == 0 || n == 1){
     return 1;
   }
   else{
    fibonacci( n - 1) + fibonacci (n - 2);
   }

}

int main(){
    clock_t t;
    int f;
    printf("Calculando...");
    int i = 0;
    int j = 0;
    for (i = 0; i < 60; i++){
      
    }
    t = clock();
    fibonacci(6);
    t = clock() - t;
    printf("Tempo decorrido: %f segundos", (float) t/CLOCKS_PER_SEC);
    return 0;
}