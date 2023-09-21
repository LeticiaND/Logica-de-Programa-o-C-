#include <iostream>
#include <string>
#include <cstdlib>
int main()
{
    //Neste exercício, você vai criar uma função que conta quantas letras e quantos dígitos (números) existem em uma string.

    std::string frase = "Tenho 29 anos";
    int quantidadeDeLetras = 0;
    int quantidadeDeNumeros = 0;

    for(int i = 0; i <= frase.length(); i++)
    {
        std::string letter;
        letter.push_back(frase[i]);//(push_back) estamos remontando um char para string.
        
        if(std::atoi(letter.c_str()) == 0){ 
            quantidadeDeLetras++; //(atoi) so consegue converter string nao char.
        } else {
            quantidadeDeNumeros++;
        }
    }

    std::cout << "A frase contém: " << quantidadeDeLetras << " letras" << "\n" << "e " << quantidadeDeNumeros << " numeros";

} 