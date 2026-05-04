#include <stdio.h>

void main() {

    int numeros[5];
    int maiorNumero;
    int menorNumero;

    for (int i = 0; i < 6; i++) {

        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);

    }
    menorNumero = numeros[0];
    maiorNumero = numeros[0];

    for (int i = 0; i < 6; i++) {

        if (numeros[i] > maiorNumero) {

            maiorNumero = numeros[i];

        }

        if (numeros[i] < menorNumero) {

            menorNumero = numeros[i];

        }
    }

    printf("Maior numero: %d\n", maiorNumero);
    printf("Menor numero: %d\n", menorNumero);

}