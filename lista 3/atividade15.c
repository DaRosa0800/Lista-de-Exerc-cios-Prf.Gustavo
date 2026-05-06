#include <stdio.h>
#include <string.h>

int main() {
    
    char frase[100];
    char palavra[20];
    int i, j, k;
    int ocorrencias = 0;
    int tamanho_frase, tamanho_palavra;

    printf("Digite a frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    printf("Digite a palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    palavra[strcspn(palavra, "\n")] = '\0';

    tamanho_frase = strlen(frase);
    tamanho_palavra = strlen(palavra);

    for (i = 0; i <= tamanho_frase - tamanho_palavra; i++) {
        
        for (j = 0; j < tamanho_palavra; j++) {
        
            if (frase[i + j] != palavra[j]) {
        
                break;
        
            }
        }
        
        if (j == tamanho_palavra) {
            
            ocorrencias++;
        
        }
    }

    printf("A palavra '%s' ocorre %d vezes na frase.\n", palavra, ocorrencias);

    return 0;
}