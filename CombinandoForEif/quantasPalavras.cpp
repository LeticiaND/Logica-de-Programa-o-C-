#include <iostream>

int QuantidadeDePalavras (std::string frase)
{
    int resultado = 1; 

    for(int i = 0; i <= frase.length(); i++)
    {
        char* letra = new char(frase[i]);
        if(strcmp(letra, " ") == 0)
        {
            resultado++;
        }
    } 
    return resultado;
}
int main ()
{
    // Quantas palavras tem em uma frase.
    std::string frase = "Eu amo o meu gato"; 
    int resultado = QuantidadeDePalavras(frase);

    std::cout << resultado;
}