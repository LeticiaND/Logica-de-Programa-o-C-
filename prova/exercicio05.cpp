#include <iostream>
//Quantas vogais tem em uma palavra.
//char* letra = new char(palavra[i]);

int main()
{
    std::string palavra = "leticia";
    std::string recebe = "";

    for(int i = 0; i <= palavra.length(); i++)
    {
        char* letra = new char(palavra[i]);
        if(strcmp(letra, "a") == 0 || strcmp(letra, "e") == 0 || strcmp(letra, "i") == 0 || strcmp(letra, "o") == 0 || strcmp(letra, "u") == 0)
        {
            recebe += letra;
        }
    }
    std::cout << recebe;
}