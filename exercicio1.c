#include <stdio.h>

void main(){

char letra;
printf("Insira uma letra: \n");
scanf("%c", &letra);
for (int i=0; i <= 10; i++){
    printf("%c ----------- %d\n", letra, i);
}
}