#include <stdio.h>

void main(){
    
    float numeros[5];
    float media;
    
    for(int i = 0; i <4; i++){
        
        printf("Digite um numero: \n");
        scanf("%f", &numeros[i]);
    
    }
    
    media = (numeros[0] + numeros[1] + numeros[2] + numeros[3]) / 4;
    
    printf("Media: %.2f", media);
}