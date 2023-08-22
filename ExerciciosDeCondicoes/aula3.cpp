#include <iostream>

int main()
{
    // Pedir sua idade para o usario e mostrar se ele pode dirigir ou nao (so podera dirigir se for maior de 18 anos)

    int idade = 18;

    if(idade >= 18)
    {
        std::cout << "Pode dirigir";
    }else
    {
        std::cout << "Nao pode dirigir";
    }
    
}