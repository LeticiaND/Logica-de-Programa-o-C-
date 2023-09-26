#include <iostream>

int main()
{
    int numero = 5;
    int resultado = 1;

    for(int i = numero; i >= 1; i--)
    {
        resultado *= i;
    }
    std::cout << "O Fatorial de " << numero << " é: " << resultado;

}