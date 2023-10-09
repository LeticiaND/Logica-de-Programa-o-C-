#include <iostream>

std::string removerEspacosEmBranco (std::string frase)
{
    std::string texto = "";

    for(int i = 0; i <= frase.length(); i++)
    {
        char* letra = new char(frase[i]);
        if(strcmp(letra, " ") != 0)
        {
            texto += letra;
        }
    }

    return texto;

}
int main()
{
    std::string result = removerEspacosEmBranco("Eu amo voce");

    std::cout << result; 
}