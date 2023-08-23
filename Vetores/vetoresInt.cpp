#include <iostream>

int main ()
{
    int vet[5] = {1,2,3,4,5};
   
    vet[3] = 30;
    // A variavel "numero" nao é uma lista entao ela so pode receber um valor.
    int numero = vet[3];

    vet[0] = 9;
    vet[1] = 8;
    vet[2] = 7;
    vet[3] = 6;
    vet[4] = 5;
    
    std::cout << vet[4];
}