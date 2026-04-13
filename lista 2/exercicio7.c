#include <stdio.h>
#include <string.h>

void main(){
    char palavra[50];
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
    int contador;
    for (contador = 0; palavra[contador]  != 0;) {
        contador++;
    }
    printf("Quantidade de letras: %d \n", contador);

}