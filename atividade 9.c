#include <stdio.h>

int main() {
    int num, soma = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
        return 1; 
    }

    while (num > 0) {
        soma += num % 10;  
        num /= 10;         
    }

    printf("A soma dos dígitos é: %d\n", soma);

    return 0;
}
