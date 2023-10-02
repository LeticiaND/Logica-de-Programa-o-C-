#include <iostream>


// EX - 1 
/*
    Criar um metodo que valide se um usuario pode ou nao dirigir dada a sua idade

*/

// EX - 2
/*
    Criar um metodo que calcule a idade do usuario de acordo com o ano de nascimento informado.

*/

int calcularIdade (int anoDeNascimento)
{
    return 2023 - anoDeNascimento;
}

void podeDirigir (int idade)
{

    if(idade < 18)
    {
        std::cout << "Nao pode";
        return;
    }

    std::cout << "Pode";
    
}


int main()
{   
    podeDirigir(calcularIdade(2022));
}