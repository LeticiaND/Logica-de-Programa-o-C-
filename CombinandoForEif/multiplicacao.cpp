#include <iostream>

int main()
{
    //Calcular a soma dos múltiplos de 3 entre 1 e 100 usando um loop "for" e estrutura "if".
    //1683
    
    int multiplo = 0;
    int multiplicacao = 3;
    int soma = 0;
    for(int i = 1; i <= 100; i++)//contando
    {
         
        if (i % 2 == 0) {
            soma = soma + i; 
        }
        
    }
    std::cout << soma;
}