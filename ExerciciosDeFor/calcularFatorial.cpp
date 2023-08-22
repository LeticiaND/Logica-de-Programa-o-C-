#include <iostream>

int main ()
{
    //Calcular o fatorial de um número fornecido pelo usuário. Exemplo de entrada e saída:
    //Digite um número inteiro: 5 O fatorial de 5 é: 120.

    int numero = 4;
    int resultado = numero;

    while (numero > 1)
    {
        resultado = resultado * (numero-1);
        numero--;
    }
    
    
    std::cout << resultado;
}
