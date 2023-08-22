#include <iostream>

int main ()
{
    //Calcular a média de uma lista de números. Dado uma lista de números, escreva um programa que calcule a média aritmética dos elementos.


    int lista[5] = {10,10,10,10,10};

    int soma = 0;

    for(int i = 0; i <= 5; i++)
    {
        soma = soma + lista[i];
    }
    std::cout << soma / 5;
}