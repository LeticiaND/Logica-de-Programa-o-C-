#include <iostream>

int main ()
{
    std::string frase = "Eu amo o rafael"; 
    int resultado = 1; // comecamos no 1 por que a frase sempre vai comecar sem espacos entao ja estamos considerando a primeira palavra.
    for(int i = 0; i <= frase.length(); i++)
    {
        char* letra = new char(frase[i]);
        if(strcmp(letra, " ") == 0) //tentando achar os especos.
        {
            resultado++;
        }
        
    }
    std::cout << resultado++;

}