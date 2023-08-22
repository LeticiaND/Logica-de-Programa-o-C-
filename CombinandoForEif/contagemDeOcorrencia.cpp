#include <iostream>

int main()
{
    std::string palavra = "Rafael";

    int resultado = 0;

    for(int i = 0; i <= palavra.length(); i++)//entao esse codigo esta validando int com string o que nao pode
    {
        char* letra = new char(palavra[i]);
        
        if(strcmp(letra, "L") == 0 || strcmp(letra, "l") == 0)
        {
            resultado++;
        }
        
    }

    std::cout << resultado;
}