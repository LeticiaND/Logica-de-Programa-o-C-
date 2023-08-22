#include <iostream>

int main ()
{
    //Imprimir os elementos de um array de nomes.

    std::string nomes[] = {"Leticia", "Rafael", "Sasha", "Wagner"};

    for(int i = 0; i <= 3; i++)
    {
        std::cout << nomes[i] << "\n";
    }
}