#include <iostream>
std::string substituicao (std::string palavra, char* letraSubstituir)
{
    std::string resultado = "";
    for(int i = 0; i < palavra.length(); i++)
    {
        char* letra = new char(palavra[i]);
        if(strcmp(letra, letraSubstituir) == 0)
        {

            resultado += "*";
        }else
        {
            resultado += letra;
        }
    }
    return resultado;
}
int main()
{
    std::string palavra = "Leticia";
    char* letraSubstituir = "i";
    std::string resultadoFinal = substituicao(palavra, letraSubstituir);
    std::cout << resultadoFinal;
}