#include  <iostream>

int main ()
{
    // Imprimir de 0 a 100 apenas os numeros impares.
    for(int i = 0; i < 100; i++)
    {
        if(i % 2 != 0)
        {
            std::cout << i << "\n";
        }
    }
}