#include <iostream>

int main ()
{
    //Se nomes forem iguais apresetne que sao iguais se nao forem apresenta que nao sao iguais.
    std::string nome = "Sabrina";

    if(nome == "Leticia")
    {
        std::cout << "Nomes iguais";
    }else
    {
        std::cout << "Nomes diferentes";
    } 
}