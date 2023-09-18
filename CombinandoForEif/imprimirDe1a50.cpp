#include <iostream>

int main()
{
    //Imprimir de 1 a 50 os numeros pares.
    for(int i = 1; i <= 50; i++)
    {
        if(i % 2 == 0)
        {
            std::cout << "Esses sao os pares: " << i << "\n";
        }
        
    }
}