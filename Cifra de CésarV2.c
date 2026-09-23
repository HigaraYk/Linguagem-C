#include <stdio.h>

int main(){
    

    
    char texto[62]; // Texto que será convertido em Cifra
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
    
    
    for (int i = 0; texto[i] != '\0'; i++) {

    // Letras maiúsculas
    if (texto[i] >= 'A' && texto[i] <= 'Z') {
        texto[i] = (texto[i] - 'A' + value) % 26 + 'A';
    }

    // Letras minúsculas
    else if (texto[i] >= 'a' && texto[i] <= 'z') {
        texto[i] = (texto[i] - 'a' + value) % 26 + 'a';
    }

    // Números
    else if (texto[i] >= '0' && texto[i] <= '9') {
        texto[i] = (texto[i] - '0' + value) % 10 + '0';
    }
}
    
    printf("%s\n",texto);
    
    return 0;
}












