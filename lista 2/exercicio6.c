#include <stdio.h>

void main(){
    char nome[50];
    printf("Digite o seu nome: ");
    scanf("%s", nome);
    for( int i=0; i<=5; i++){
    printf("Nome: %s \n", nome);
}
}