#include <stdio.h>

int main() {
    float valor_conta, porcentagem_gorjeta, gorjeta, total_a_pagar;

    printf("Digite o valor da conta no restaurante: R$ ");
    scanf("%f", &valor_conta);

    printf("Digite a porcentagem de gorjeta: ");
    scanf("%f", &porcentagem_gorjeta);

    gorjeta = (porcentagem_gorjeta / 100) * valor_conta;

    total_a_pagar = valor_conta + gorjeta;

    printf("\nValor da conta: R$ %.2f\n", valor_conta);
    printf("Porcentagem da gorjeta: %.2f%%\n", porcentagem_gorjeta);
    printf("Gorjeta: R$ %.2f\n", gorjeta);
    printf("Total a ser pago: R$ %.2f\n", total_a_pagar);

    return 0;
}
