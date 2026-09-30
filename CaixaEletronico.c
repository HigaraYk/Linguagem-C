#include <stdio.h>

int main() {

    int saldo = 1000; //Saldo limite do banco definido pelo professor
    int valor; // Valor escolhido pelo usuario

    printf("Digite o valor do saque: ");
    scanf("%d", &valor); // Puxar o valor escolhido e guardar na variavel

    if (valor < saldo) { // O valor tem que ser menor que o saldo do banco

        if (valor % 5 == 0) { // Somente multiplos de 5 

            printf("\nValor valido!\n");

            int notas100 = valor / 100;
            valor = valor % 100; // (%) Pega a quantidade de numeros equivalentes a 100. Exp: 225 tem 2 100, entao o resultado é 2.

            int notas50 = valor / 50;
            valor = valor % 50;
            
            int notas20 = valor / 20;
            valor = valor % 20;

            int notas10 = valor / 10;
            valor = valor % 10;

            int notas5 = valor / 5;
            valor = valor % 5;

            printf("\nNotas de 100: %d\n", notas100); // \n é espaço em C
            printf("Notas de 50: %d\n", notas50);
            printf("Notas de 20: %d\n", notas20);
            printf("Notas de 10: %d\n", notas10);
            printf("Notas de 5: %d\n", notas5);

        } else {
            printf("\nDigite um valor multiplo de 5!\n"); // Caso o usuario nao coloque valores multiplos de 5 
        }

    } else {
        printf("\nSaldo insuficiente!\n");
    }

    return 0;
}
