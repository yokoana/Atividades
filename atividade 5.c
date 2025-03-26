#include <stdio.h>

int main() {
    float valor_reais, cotacao_dolar, valor_dolares;

    printf("Digite o valor em reais (R$): ");
    scanf("%f", &valor_reais);

    valor_dolares = valor_reais / 5,66 ;

    printf("\nValor em reais: R$ %.2f\n", valor_reais);
    printf("Cotação do dólar: R$ %.2f\n", 5,66 );
    printf("Valor em dólares: US$ %.2f\n", valor_dolares);

    return 0;
}
