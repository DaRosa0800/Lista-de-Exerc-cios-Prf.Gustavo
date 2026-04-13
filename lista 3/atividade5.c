#include <stdio.h>


void main(){
    
    int numeros[5];
    int positivos = 0;
    
    for(int i = 0; i < 5; i++){
        
        printf("Digite um numero: \n");
        scanf("%d", &numeros[i]);
        
        if(numeros[i] > 0){
            
            positivos++;
        
        }
    }
    
    printf("Quantidade de numeros positivos: %d", positivos);

}