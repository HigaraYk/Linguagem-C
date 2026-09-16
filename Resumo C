// Comentario nao pode ter acento, para adiconar acento precisa configurar o programa para o nosso idioma


// Assim como o HTML tem que ter declaracao para executar o codigo "<!DOCTYPE html>"
// O mesmo ocorre com o C "#include <stdio.h>"

#include <stdio.h> // Os comandos podem variar depois de STD 

// <std io.h>
// <std bool.h>

// Variavel == int idade = 18;
// Texto == char nome[] ="Nome";
// Numero Inteiro == int idade = 18;
// Decimal == float altura = 1.75;
// Condicao == if (...) {}
// Se nao == else
// funcao == int soma()
// repeticao == for / while
// Booleano == true / false
// (;) indica o final da introducao

//------------------------------------


// Print -- 0 -- 

int main() { // A programacao comeca na funcao 

    printf("Ola, mundo");
    return 0;


}

// Programa 
//    V
//  Main()
//    V
//  Codigo 

// Valores inteiros

int idade = 18;
int moedas = 100;
int vidas = 3;

// Valores quebrados

float altura = 1.75;
float velocidade = 5.5;

// Valores Texto

char nome = "Carlos"; // Aspas duplas para texto 
char letra = 'a'; // Aspas simples para Letra 

// Valores verdadeiro ou falso

bool jogador vivo = false;
bool existencia = true;


// Texto idade -- 1 -- 

int main() {
    int idade = 18;

    printf("Minha idade e: %d", idade);

    return 0;
}

// (%d) e um espaco reservado para o valor "idade"
// O computador substitui %d por idade 

// %d == INT 
// %f == FLOAT 
// %c == CHAR
// %s == STRING

// Soma --2-- 

int vida = 100;
int dano = 20;

int main() {
    
vida = vida - dano;

printf("%d", vida);

return 0; 

}

// If Else --3--

//if (conteudo) {
//   codigo
//}

int valor = 10;

int main() { // Sem ELSE
    if (valor >= 10) {
        printf("Verdadeiro");
    }
  return 0;
}

int main() { // Com ELSE
    if (valor >= 10) {
        printf("Verdadeiro");
    }
    else {
        printf("Falso");
    }
     return 0;
}

// If Else com dois valores --4--

if (idade >= 18 && dinheiro >=10) { // && significa tambem 
    printf("Pode Comprar");

 return 0;
}

// If Else com condicao --5-- 

if (dia == 6 || dia == 7) { // || significa ou 
    printf("Fim de semana");

    return 0;

}

// If Else com negacao --6-- 

if (!jogadorvivo) { // ! significa o oposto do valor Booleano 
    printf("GAME OVER"):

    return 0;
}


// Verdadeiro e Falso --7--

// Para poder usar os valores booleanos e preciso declarar junto com o #include

#include <stdbool.h>

int main() {
    bool jogadorvivo = false;
    
    if (!jogadorvivo) {
        
        printf("Verdadeiro");
    }
    else{
        printf("False");
    }
    
    return 0;
}

// "Input" --8--

// scaf() tem o papel de input em "C"

int main() {
    int idade;

    printf("Qual a sua idade?");
    scanf("%d", &idade);

    printf("Sua idade: %d", idade);

    return 0;
}
// "%d" e um espaco reservado para valores decimais (inteiros)
// (&idade) O "&" pega o valor de "Idade" e coloca na variavel idade

// Em: "printf("Sua idade: %d", idade)" o "%d" vai pegar o valor de "idade" e colocar no texto.





// Atividade Caixa eletronico 



#include <stdio.h> // Declaracao da biblioteca, necessario para rodar o codigo

int main() { // Como se fosse o cabecalho do codigo. 

    int saldo = 1000; // saldo do banco
    int valor; // variavel do valor do cliente

    printf("Digite o valor do saque: "); //  texto
    scanf("%d", &valor); // valor que o cliente vai digitar

    // "%d" e um espaco reservado para valores decimais (inteiros)
    // (&valor) O "&" pega o valor de "valor" e coloca na variavel "valor"

    if (valor < saldo) { // IF representa a condicao do valor 

        if (valor % 5 == 0) { // Valor do cliente e verifica se e multiplo de "5"

            printf("\nValor valido!\n"); // Funcao print para mostrar o texto e o (\n) para dar espaco no texto
            // existem dois (\n) para dar espaco para cima e para baixo do texto


            //int e variavel para valores inteiros 
            int notas100 = valor / 100; // O (/) divide as decimais (255 / 100 == 2)
            valor = valor % 100; // O (%) divide o valor pela porcentagem 

            int notas50 = valor / 50;
            valor = valor % 50;

            int notas20 = valor / 20;
            valor = valor % 20;

            int notas10 = valor / 10;
            valor = valor % 10;

            int notas5 = valor / 5;
            valor = valor % 5;

            printf("\nNotas de 100: %d\n", notas100); // Imprime o valor dos decimais calculados
            printf("Notas de 50: %d\n", notas50);
            printf("Notas de 20: %d\n", notas20);
            printf("Notas de 10: %d\n", notas10);
            printf("Notas de 5: %d\n", notas5);

        } else {
            printf("\nDigite um valor multiplo de 5!\n"); // Caso o valor nao seja multiplo de 5, vai printar este texto
        }

    } else {
        printf("\nSaldo insuficiente!\n");// Caso o valor nao seja valido, vai printar este texto
    }

    return 0; // e uma funcao obrigatoria
}
