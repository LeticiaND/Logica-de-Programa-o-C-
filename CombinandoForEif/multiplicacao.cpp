#include <iostream>

int main()
{
    //Calcular a soma dos múltiplos de 3, entre 1 e 100 usando um loop "for" e estrutura "if".
    //1683

    int soma = 0;

    for(int i = 0; i <= 100; i++)
    {
        if(i % 3 == 0)
        {
            soma = soma + i;
        }
    }
    std::cout << soma;
}