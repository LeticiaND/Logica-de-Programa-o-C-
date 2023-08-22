#include <iostream>

int main ()
{
    // Faca uma valicacoes, se o tempo estiver com sol print (Partiu praia), se o tempo estiver com chuva (partiu netflix), e se estiver nublado (partiu caminhada).

    std::string tempo = "Sol";

    if(tempo == "Sol")
    {
        std::cout << "Partiu praia";
    }else if (tempo == "Chuva")
    {
        std::cout << "Partiu netflix";
    }else
    {
        std::cout << "Partiu caminhada";
    }


}