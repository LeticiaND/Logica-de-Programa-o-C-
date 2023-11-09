#include <iostream>
//Substituir letra.
std::string substituirLetra(std::string palavra, char* letraSubstituir)
{
    std::string recebe = "";
    for(int i = 0; i <= palavra.length(); i++)
    {
        char* letraAtual = new char(palavra[i]);
        if(strcmp(letraAtual, letraSubstituir) == 0)
        {
            recebe += "*";
        }else
        {
            recebe += letraAtual;
        }
    }
    return recebe;
}

int main()
{
    std::string palavra = "Leticia";
    char* letraSubstituir = "i";
    std::string resultadoFinal = substituirLetra(palavra, letraSubstituir);
    std::cout << resultadoFinal;
}