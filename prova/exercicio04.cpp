#include <iostream>
//Descobrir se a palavra é um palindrome.
int main()
{
    std::string palavra = "tenet";
    std::string recebe = "";

    for(int i = palavra.length() -1; i >= 0; i--)
    {
        recebe += palavra[i];
    }
    if(recebe == palavra)
    {
        std::cout << "É um palindrome";
    }else
    {
        std::cout << "Não é um palindrome";
    }
    
}