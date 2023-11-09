#include <iostream>

//Quantidade de letras iguais (lembre que o usuario precisa escolher uma letra)

int quantidadeDeLetrasIguais(std::string palavra, char* letra)
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

int main()
{
    std::string palavra = "Leticia";
    char* letra = "i";
    int resultado = quantidadeDeLetrasIguais(palavra, letra);
    std::cout << resultado;
}
