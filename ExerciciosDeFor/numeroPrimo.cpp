#include <iostream>

int main ()
{
    // Verificar se um número fornecido pelo usuário é primo. Exemplo de entrada e saída:
    //Digite um número inteiro: 17. 17 é um número primo.
    //ou uma divisão com resto zero (e neste caso o número não é primo),
    int numero = 5;
    int recebe = 0;
    for(int i = 2; i <= numero / 2; i++)
    {
        if(recebe % i == 0)
        {
            recebe++;
        }
    }
    if(recebe == 0)
    {
        std::cout << "É numero primo " << numero;
    }else
    {
       std::cout << "Nao é numero primo " << numero; 
    }
    
}