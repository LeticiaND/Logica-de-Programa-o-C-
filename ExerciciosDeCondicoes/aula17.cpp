#include <iostream>

int main ()
{
    // Para o operador (||), apenas uma das condicoes tem que ser correta, para que ele funcione.

    int pessoa1 = 30;
    int pessoa2 = 12;

    if(pessoa1 > 17 || pessoa2 > 17)
    {
        std::cout << "Pode entrar no cinema";
    }else
    {
        std::cout << "Nao pode entrar no cinema";
    }

}