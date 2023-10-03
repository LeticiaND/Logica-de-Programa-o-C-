#include <iostream>
#include <string>
#include <cstdlib>

int contagemDeLetrasENumeros(std::string frase)
{
    int quantidadeDeNumeros = 0;
    for(int i = 0; i <= frase.length(); i++)
    {
        std::string letter;
        letter.push_back(frase[i]);//(push_back) estamos remontando um char para string.
        
        if(std::atoi(letter.c_str()) != 0){ 
            quantidadeDeNumeros++;
        } 
    }
    return quantidadeDeNumeros;
}
int main()
{
    //Neste exercício, você vai criar uma função que conta quantas letras e quantos dígitos (números) existem em uma string.

    std::string frase = "Tenho 22 anos";
    int quantidadeDeNumeros = contagemDeLetrasENumeros(frase);
    int quantidadeDeLetras = frase.length() - quantidadeDeNumeros;

    std::cout << "A frase contém: " << quantidadeDeLetras << " letras" << "\n" << "e " << quantidadeDeNumeros << " numeros";

} 