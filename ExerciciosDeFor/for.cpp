#include  <iostream>

int main ()
{
    // Imprimir de 0 a 100 apenas os numeros pares.
    for(int i = 0; i < 100; i = i + 2) // (i = i + 2) estamos falando que i recebe o valor de i mais dois.
    {
        std::cout << i << "\n";
    }
}
