#include <iostream>

int main()
{
    // Faça um scritp ler tres numeros inteiros, em seguida mostre o maior deles

    int primeiroNumero = 3;
    int segundoNumero = 1;
    int terceiroNuemro = 10;

    if(primeiroNumero > segundoNumero)
    {
        if (primeiroNumero > terceiroNuemro) 
        {
            std::cout << primeiroNumero;
        } else 
        {
            std::cout << terceiroNuemro;
        }
    
    }
   
}