#include <iostream>

int main()
{
    int numero = 5;

    if(numero >0)
    {
        std::cout << "Numero é positivo";
    }else if (numero < 0)
    {
        std::cout << "Numero é negativo";
    }else
    {
        std::cout << "O Numero é 0";
    }
}