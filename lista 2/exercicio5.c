#include <stdio.h>

void main(){
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    for(letra <= 'z'; letra >= 'a'; letra--){
        printf("%c \n", letra);
    }
}