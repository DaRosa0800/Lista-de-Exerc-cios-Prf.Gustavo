#include <stdio.h>
#include <ctype.h>

void main(){
    char minuscula;
    printf("Digite uma letra minuscula: ");
    scanf("%c", &minuscula);
    char maiuscula = minuscula - 32;
    printf("A letra maiuscula correspondente e: %c \n", maiuscula);
}