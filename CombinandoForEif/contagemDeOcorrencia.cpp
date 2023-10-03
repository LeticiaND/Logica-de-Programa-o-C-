#include <iostream>

void contagemDeOcorrencia(char *letraUsuario, std::string palavra)
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
    std::cout << resultado;
}
int main()
{

    char *letra = "j";
    contagemDeOcorrencia(letra, "Rafael");
}