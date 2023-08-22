#include <iostream>

int main()
{
    //Calcular a soma dos primeiros 10 números naturais.
    int soma = 0;
    for(int i = 1; i <= 10; i++)
    {
        soma = soma + i;
    }
    std::cout << soma;
}