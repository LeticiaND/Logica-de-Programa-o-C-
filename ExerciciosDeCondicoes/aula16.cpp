#include <iostream>

int main ()
{
    // O operador (&&), so pode ser usado quando as duas validacoes forem corretas, (se uma das opracoes forem falsas as condicoes vai serem falsas).
    int pessoa1 = 20;
    int pessoa2 = 17;

    if(pessoa1 > 17 && pessoa2 > 17)
    {
        std::cout << "Pode entrar";
    }else
    {
        std::cout << "Nao pode entrar";
    }
}