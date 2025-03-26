#include <stdio.h>

int main() {
    float distancia, velocidade, tempo;

    printf("Digite a distância a ser percorrida (em km): ");
    scanf("%f", &distancia);

    printf("Digite a velocidade média do carro (em km/h): ");
    scanf("%f", &velocidade);

    tempo = distancia / velocidade;

    printf("\nDistância a ser percorrida: %.2f km\n", distancia);
    printf("Velocidade média do carro: %.2f km/h\n", velocidade);
    printf("Tempo estimado da viagem: %.2f horas\n", tempo);

    return 0;
}
