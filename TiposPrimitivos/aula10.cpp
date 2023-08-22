#include <iostream>

int main ()
{
    //Tipos primitivos
    int numero = 23;
    double saldo = 2330.00;
    bool genero = false;
    float contaCorrente = 234550.555;
    // char*  letra = "a";

    // std::string nome = "Leticia";
    
    //Variaveis possibilidades de como usa-las

    int idade = 22;
    int resultado = idade + 2;
    int n = resultado / 2;

    std::cout << "idade: " << idade << "\n";
    std::cout << "resultado: " << resultado << "\n";
    std::cout << "n: " << n << "\n";

    std::string nome = "leticia";
    std::string textoDeBoasVindas = "Bem vindo " + nome + " ao palacio \n";

    std::cout << textoDeBoasVindas;


}

