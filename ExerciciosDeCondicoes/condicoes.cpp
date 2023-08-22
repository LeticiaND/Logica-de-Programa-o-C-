#include <iostream>

int main ()
{
    int idade = 650;

    int idadeMinimaPermitidaParaDirigir = 1;
    int idadeMaximaParaDirigir = 80;

    bool idadeEhMaiorQue18 = idade > idadeMinimaPermitidaParaDirigir;
    bool idadeEhMenorQue80 = idade < idadeMaximaParaDirigir;

    if(idadeEhMaiorQue18 == true && idadeEhMenorQue80 == true)
    {
        std::cout << "Pode dirigir";
    }else
    {
        std::cout << "Nao pode dirigir";
    }
}