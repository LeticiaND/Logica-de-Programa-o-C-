#include <iostream>

int calcularFatorial(int numero)
{
    int resultado = 1;

    for(int i = numero; i >= 1; i--)
    {
        resultado *= i;
    }
    return resultado;
}
int main()
{
    int numero = 5;

    std::cout << calcularFatorial(numero);
}