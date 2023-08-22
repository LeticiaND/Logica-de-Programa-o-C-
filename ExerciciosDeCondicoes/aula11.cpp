#include <iostream>

int main ()
{
    // Faça um programa que peça dois números ao usuário e mostre qual o maior e qual o menor

    int numero1 = 1;
    int numero2 = 4;

    if(numero1 > numero2)
    {
        std::cout << "Numero maior: " << numero1 << " Numero menor: " << numero2;
    }else
    {
        std::cout << "Numero maior: " << numero2 << " Numero menor: " << numero1;
    }
    

}