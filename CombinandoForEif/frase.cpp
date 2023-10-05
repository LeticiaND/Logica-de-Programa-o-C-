#include <iostream>

int contagemDeLetras (std::string frase)
{
    int total = 0;
    for(int i = 1; i <= frase.length(); i++)
    {
        char* letter = new char(frase[i]);
        if (std::strcmp(letter, " ") != 0) //valida o oposto de 0 e o oposto de 0 é letra
        {
            total++; // esta icrementndo o total de vezes que o for tem que rodar.
        }
    }
    return total;
}
int main ()
{
    //Contagem de letras.
    //Escreva um programa que solicite ao usuário uma frase. Utilize um loop "for" para percorrer cada caractere da frase e, 
    //usando uma estrutura "if", conte e exiba quantas letras (excluindo espaços) estão presentes na frase.
    std::string frase = "Eu amo meu gato";
    
    // Essa é outra maneira que pode ser usada: frase.erase(std::remove_if(frase.begin(), frase.end(), ::isspace), frase.end()); 
    
    std::cout << contagemDeLetras(frase);;
}