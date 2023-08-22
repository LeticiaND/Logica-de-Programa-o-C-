#include <iostream>

int main ()
{
    int numeroTabuada = 2;

    for(int i = 1; i <= 10; i++)
    {
        std::cout << numeroTabuada << "x" << i << ": " << numeroTabuada * i << "\n";
    }
}