#include <iostream>

int main ()
{
    // Peça uma idade para o usuario e valide se ele tem que se alistar ou nao.
    int idade = 10;

    if(idade == 18)
    {
        std::cout << "Tem que se alistar";
    }else if(idade > 18)
    {
        std::cout << "Ja se alistou";
    }else
    {
        std::cout << "Menor de idade";
    }
}

