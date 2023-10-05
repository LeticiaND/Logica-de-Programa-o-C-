#include <iostream>

int calcularAsoma ()
{
    int soma = 0;

    for(int i = 0; i <= 100; i++)
    {
        if(i % 3 == 0)
        {
            soma = soma + i;
        }
    }
    return soma;
}
int main()
{
    //Calcular a soma dos múltiplos de 3, entre 1 e 100 usando um loop "for" e estrutura "if".
    //1683
    
    std::cout << calcularAsoma();
}