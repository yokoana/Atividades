#include <stdio.h>

int main() {
    int num, i;
    int contadorDivisores = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("O número deve ser maior que 1 para ser considerado primo.\n");
        return 0;
    }

    printf("Divisores de %d: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
            contadorDivisores++;
        }
    }
    printf("\n");

    if (contadorDivisores == 2) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}
