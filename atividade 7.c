#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o comprimento do primeiro lado: ");
    scanf("%d", &a);
    printf("Digite o comprimento do segundo lado: ");
    scanf("%d", &b);
    printf("Digite o comprimento do terceiro lado: ");
    scanf("%d", &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("O triângulo é válido.\n");
    } else {
        printf("O triângulo não é válido.\n");
    }

    return 0;
}
