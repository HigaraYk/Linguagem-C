#include <stdio.h>

int main(){
    
    float valor1;
    float valor2;
    char operador;
    
    
    printf("Digite um numero:");
    if (scanf("%f",&valor1) != 1 ) {
        printf("\nDigite um numero valido!");
        return 1;
    } 
   
    printf("Digite um operador:");
    scanf("\n%c",&operador);
    
    printf("Digite outro numero:");
    if (scanf("%f",&valor2) != 1 ) {
        printf("\nDigite um numero valido!");
        return 1;
    }
   
  
  if (operador == '+'){
      float value = valor1 + valor2;
      printf("%f",value);
  } else if(operador == '-') {
      float value = valor1 - valor2;
      printf("%f",value);
  } else if(operador == '*') {
      float value = valor1 * valor2;
      printf("%f",value);
  } else if(operador == '/') {
      float value = valor1 / valor2;
      printf("%f",value);
  } else {
      printf("\noperador invalido");
  }
  return 0;
}







