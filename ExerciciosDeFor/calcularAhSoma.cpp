#include <iostream>

int main ()
{
    // Calcular a soma dos dígitos de um número inteiro.
    // Dado um número inteiro, escreva um programa que calcule a soma de seus dígitos.

    int a = 25;

    int resultado = 0; // variavel que recebe o valor da soma
    while(a > 0)
    {
        int numero = a % 10; // retorna o numero

        resultado = resultado + numero; 

        a = a/10; // esta fazendo 25/ 10 = 2,5.
    }

    std::cout << resultado;
    
}