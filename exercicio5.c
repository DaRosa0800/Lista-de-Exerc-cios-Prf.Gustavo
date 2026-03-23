#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    printf("Contagem regressiva até a letra 'a':\n ");
    for(char  = letra, 1 >= 'a'; 1--) {
        printf("%c", 1);
    }
    printf("\n");

    return 0;
}