#include <iostream>

int main()
{
    std::string palavra = "leticia";
    std::string palavraInvertida = "";
    
    for(int i = palavra.length() - 1; i >= 0; i--)
    {

        palavraInvertida +=  palavra[i];
    }

    std::cout << palavraInvertida;
}