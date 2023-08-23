#include <iostream>

int main ()
{
    std::string frase = "Eu amo o rafael"; 
    int resultado = 1; 
    for(int i = 0; i <= frase.length(); i++)
    {
        char* letra = new char(frase[i]);
        if(strcmp(letra, " ") == 0) 
        {
            resultado++;
        }
        
    }
    std::cout << resultado++;

}