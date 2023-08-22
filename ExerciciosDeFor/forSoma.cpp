#include <iostream>

int main()
{
    //Calcular a soma dos números de 1 a 100.Exemplo de saída:
    int soma = 0;
    for(int i = 0; i <= 100; i++)
    {
        soma = soma + i;
    }
    std::cout << soma;
}