#include <iostream>

int main()
{
    //Imprimir os primeiros N números da sequência de Fibonacci, onde N é fornecido pelo usuário.

    int numero = 8;
    int j = 1;
    int i = 0;
    int soma = 0;

    for(int k = 1; k <= numero; k++) 
    {
        soma = i + j;
        i = j; 
        j = soma; // passamos soma para j pois no calculo de fibonacci precisamos pegar o valor da soma para poder fazer a outra soma. exc:(j = soma/ i + j = 1 depois i + j = 2)
        std::cout << j; 
    }
}