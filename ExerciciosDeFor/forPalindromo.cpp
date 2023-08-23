#include <iostream>

int main ()
{
    //Verificar se uma palavra é um palíndromo. 
    //Um palíndromo é uma palavra que é igual quando lida da esquerda para a direita e vice-versa.
    // Escreva um programa que verifique se uma palavra é um palíndromo.

    std::string palavra = "tenet";

    std::string palavraInverso = ""; // estamos criando uma variavel vazia que futuramente ira guardar o valor da variavel palavra

    for(int i = palavra.length() -1; i >= 0; i--) // usamos o length() pois estamos trabalhando com string e ele pega o total de letras e o size ele pega valores int.
    {
        palavraInverso = palavraInverso + palavra[i]; // aqui estamos chamando a variavel palavraInverso que ira receber o valor da variavel palavraInverso e concatenando com a variavel palavra[i], que esta passando para a variavel palavraInverso a palavra inverdida para criar uma palavra novamente.
    }

    if (palavraInverso == palavra) 
    {
        std::cout << "E um palindromo";
    } else 
    {
        std::cout << "Nao e um palindromo";   
    }


}