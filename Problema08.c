 /*Escreva um programa que leia uma série de pares de números da seguinte
forma: Número do produto e Quantidade vendida por um dia. Seu programa
deve usar uma instrução switch para ajudar a determinar o preço de varejo
de cada produto. Seu programa deve calcular e exibir o valor total de varejo
de todos os produtos vendidos na semana passada.*/

#include <stdio.h>

int main() {
    int numeroProduto, quantidadeVendida;
    double valorTotalVarejo = 0.0;

    printf(" NUMERO || PRODUTO  \n");
    printf(" - 34   -- Maça verde \n");
    printf(" - 35   -- Mamao \n");
    printf(" - 36   -- uva \n");
    printf(" - 37   -- Banana \n");
    
    printf("Informe os pares de numeros (Numero do produto e Quantidade vendida por dia):\n");
    printf("Digite 0 0 para encerrar.\n");

    // Loop para ler pares de números até que 0 0 seja inserido
    while (1) {
        printf("Numero do produto (ou 0 0 para encerrar): ");
        scanf("%d", &numeroProduto);

        // Verifica se o usuário deseja encerrar
        if (numeroProduto == 0) {
            break;
        }

        printf("Quantidade vendida por dia: ");
        scanf("%d", &quantidadeVendida);

        // Calcula o preço de varejo usando uma instrução switch
        double precoVarejo = 0.0;
        switch (numeroProduto) {
            case 1:
                precoVarejo = 2.50;
                break;
            case 2:
                precoVarejo = 3.75;
                break;
            case 3:
                precoVarejo = 1.99;
                break;
            case 4:
                precoVarejo = 5.49;
                break;
            default:
                printf("Numero do produto invalido.\n");
                continue;  // Reinicia o loop para obter entrada válida
        }

        // Calcula e acumula o valor total de varejo
        double totalProduto = precoVarejo * quantidadeVendida;
        valorTotalVarejo += totalProduto;
    }

    // Imprime o valor total de varejo para a semana
    printf("\nValor total de varejo para a semana: R$%.2f\n", valorTotalVarejo);

    return 0;
}
