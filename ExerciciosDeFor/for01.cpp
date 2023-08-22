#include <iostream>

int main ()
{
    // Calcular a soma dos números de 1 a 10
    int soma = 0; // nao podemos passar vazio pois quando passamos vazio a variavel quarda alguns numeros aleatorios.

    for(int i = 0; i <= 10; i++)
    {
        soma = soma + i;
    }
    std::cout << soma;
}