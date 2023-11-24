#include <iostream>

int contagemDeOcorrencia(char *letraUsuario, std::string palavra)
{
    int resultado = 0;

    for(int i = 0; i < palavra.length(); i++)
    {
        char* letra = new char(palavra[i]);
        if(strcmp(letra, letraUsuario) == 0 )
        {
            resultado++;
        }
    }
    return resultado;
}
int main()
{

    char *letra = "a";
    std::cout << contagemDeOcorrencia(letra, "Rafael");
}