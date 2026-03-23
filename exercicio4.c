#include <stdio.h>

int main() {

    char letra;

    printf("Digite uma letra minuscula: ");
    scanf("%c", &letra);
    printf("Versao maiuscula: %c ", letra - 32);
    return 0;
}