#include <iostream>

int main()
{
    std::string palavra = "tenet";
    std::string recebe = "";

    for(int k = palavra.length(); k > 0; k--)
    {
        recebe += palavra[k];
    }
    if(palavra == recebe)
    {
        std::cout << "É um palindrome";
    }else
    {
        std::cout << "Nao é um palindrome";
    }
    
}