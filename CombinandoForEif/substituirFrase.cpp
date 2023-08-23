#include <iostream>

int main()
{
    std::string frase = "eu sou linda"; 
    std::string textoFinal = ""; 

    for(int i = 0; i < frase.length(); i++)
    {
        char* letter = new char(frase[i]);
        if(strcmp(letter, "a" ) == 0|| strcmp(letter, "e") == 0|| strcmp(letter, "i") == 0|| strcmp(letter, "o") == 0 || strcmp(letter, "u") == 0)
        {

            textoFinal += "*";
        }else
        {
            textoFinal += letter;
        }
    }

    std::cout << textoFinal;
}