#include <stdio.h>
#include <string.h>

void main(){
    char palavra[50];
    int vogais = 0;
    int i;
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
    for (i = 0; palavra[ i ] != '\0'; i++) {         
        char c = palavra[ i ];
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        vogais++;
        }
    }
    printf("Quantidade de vogais: %d \n", vogais);
}