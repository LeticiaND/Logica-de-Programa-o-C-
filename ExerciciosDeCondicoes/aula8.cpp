#include <iostream>

void podeDoar(int idade)
{
    if(idade > 18 & idade < 67)
    {
        std::cout << "Pode doar";
    }else
    {
        std::cout << "Nao pode doar";
    }
}

int main()
{
    // Peça uma idade para o usuario, (se ele for maior que 18 pode doar e se ele for acima de 67 nao pode doar)

    podeDoar(20);
}