#include <iostream>

int main()
{
    // Crie um programa que peça um número ao usuário e armazene ele na variável x. Depois peça outro número e armazene na variável y. Mostre esses números. Em seguida, faça com que x passe a ter o valor de y, e que y passe a ter o valor de x.

    int x = 1;
    int y = 6;

    std::cout << "X Anterior: " << x << " Y Anterior: " << y << "\n";

    int valorDeX = x;
    x = y;
    y = valorDeX;
  
    
    std::cout << "X atual: " << x << " Y Atual: " << y;
}