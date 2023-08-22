#include <iostream>

int main()
{
    std::string senha = "Lllllllll";

    if(senha.length() <= 8)
    {
        std::cout << "Sua senha passou";
    }else
    {
        std::cout << "Sua senha tem mais de 8 caractere";
    }
    
}
