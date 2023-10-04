#include <iostream>

int main ()
{
    //FAZER!!!!!!!!!!
    //Verificar se uma palavra é um palíndromo. 
    //Um palíndromo é uma palavra que é igual quando lida da esquerda para a direita e vice-versa.
    // Escreva um programa que verifique se uma palavra é um palíndromo.

    std::string palavra = "rafael";

    std::string palavraInverso = ""; 

    for(int i = palavra.length() -1; i >= 0; i--)
    {
        palavraInverso += palavra[i];
    }

    if(palavra == palavraInverso)
    {
        std::cout << "É um palindromo";
    }else
    {
        std::cout << "Nao é um palindromo";
    }

}