#include <iostream>

int main()
{
    //Imprimir os primeiros N números da sequência de Fibonacci, onde N é fornecido pelo usuário.

    int numero = 8;
    int j = 1;
    int i = 0;
    int soma = 0;

    for(int k = 1; k <= numero; k++) //apenas fazendo a contagem de 1 ate numero.
    {
        soma = i + j;
        i = j; // i recebe o valor anterior de j.
        j = soma; // passamos soma para j por que no calculo de fibonacci precisamos pegar o valor sa coma para poder fazer a outra soma. (j = soma/ i + j = 1 depois i + j = 2)
        std::cout << j; 
    }
}