#include <iostream>

int main()
{
    //remover espaços em branco.
    std::string frase = "Eu amo voce";

    for(int i = 0; i <= frase.length(); i++)
    {
        char* letra = new char(frase[i]);
        if(strcmp(letra, " ") == 0)
        {
            letra++;
        }else
        {
            std::cout << letra;
        }
    }
}