#include <stdio.h>

int main() {
    int num, maisFrequente = -1, contagem = 0, maiorFrequencia = 0;
    int frequencias[1000] = {0}; 

    printf("Digite uma sequência de números inteiros positivos (digite 0 para terminar):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num > 0 && num < 1000) {
            frequencias[num]++;

            if (frequencias[num] > maiorFrequencia || 
               (frequencias[num] == maiorFrequencia && num < maisFrequente)) {
                maiorFrequencia = frequencias[num];
                maisFrequente = num;
            }
        } else {
            printf("Número inválido. Por favor, insira um número positivo entre 1 e 999.\n");
        }
    }

    if (maisFrequente != -1) {
        printf("O número mais frequente é %d, que foi digitado %d vezes.\n", maisFrequente, maiorFrequencia);
    } else {
        printf("Nenhum número válido foi digitado.\n");
    }

    return 0;
}
