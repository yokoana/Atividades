/******************************************************************************
- ler um numero N e um vetor de N inteiros
- calcular a média dos valores lidos
- imprimir essa média
- imprimir os elementos do vetor que forem maiores que a média calculada

*******************************************************************************/

#include <stdio.h>

int main(){
   
    int N;
    scanf("%d", &N );
   
    int vetor [N];
    float soma = 0.0;
   
    for (int i = 0; i < N; i++){
        scanf ("%d", &vetor[i]);
        soma += vetor[i];
       
    }
   
    float media = soma / N;
   
    printf("media: %.2f", media);
   

    return 0;
}