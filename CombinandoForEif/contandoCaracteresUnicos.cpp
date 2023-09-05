#include <iostream>

int main()
{
    //TERMINAR
    std::string frase = "Eu sempre vou continuar estudando";
    int remontando = 0;

    for(int i = 0; i <= frase.size(); i++)
    {
        char* letter = new char(frase[i]);
        for(int k = 0; k <= frase.size(); k++)
        {  
        if(frase[i] == frase[k])
        {
            remontando;
        }else 
        {
            remontando;
        }
        }

    }
    std::cout << "Quantidade de caracteres unicos: " << remontando;
}