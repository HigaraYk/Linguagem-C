#include <stdio.h>

int main(){
    

    
    char texto[52]; // Texto que será convertido em Cifra
    int value;// Nº de Cifras
    
    printf("Digite um valor de cifra:\n");
       if (scanf("%d", &value) !=1 ){ // Caso o Numero não funcione, pare o código. 
           printf("Digite um numero válido!");
           return 1;
       }
          printf("\n");// Espaço 
    printf("Digite um texto:\n");
       scanf("%s", &texto);
          printf("\n"); // Espaço 
    
    
    for (int i = 0; texto[i] != '\0'; i++) { // loop for para a cifra funcionar
    texto[i] = texto[i] + value; // Value == valor da cifra
    }
    
    printf("%s\n",texto);
    
    return 0;
}












