#include <iostream>
#include <string>
#include <cstdlib>
int main()
{
    //TERMINAR
    //Neste exercício, você vai criar uma função que conta quantas letras e quantos dígitos (números) existem em uma string.

    std::string frase = "Tenho 22 anos";
    int quantidadeDeLetras = 0;
    int quantidadeDeNumeros = 0;
    int i = std::atoi(frase.c_str());//não pode ser representado como um inteiro se retornar 0;

    std::cout << i << std::endl;
    for(int i = 0; i <= frase.length(); i++)
    {
        quantidadeDeLetras += frase[i];
    }

    std::cout << "A frase contém: " << quantidadeDeLetras << "letras";

}