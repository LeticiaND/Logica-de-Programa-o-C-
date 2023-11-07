#include <iostream>

int quantidadeDeLetras(std::string palavra, char* letra)
{
    int recebe = 0;
    for(int i = 0; i <= palavra.size(); i++)
    {
        char* letraAtual = new char(palavra[i]);
        if(strcmp(letraAtual, letra) == 0)
        {
            recebe++;
            
        }
    }
    return recebe;
}

int main ()
{
    std::string palavra = "Letciaa";
    char* letra = "a";

    int resultado = quantidadeDeLetras(palavra, letra);
    std::cout << resultado;
}