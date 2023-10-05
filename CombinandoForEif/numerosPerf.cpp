#include <iostream>


int main()
{
    // Adcione um numero e mostre se ese numero é perfeito ou nao.
    int num = 6; 
    int soma = 0;

    for(int i = 1; i < num; ++i)
    {
        if (num % i == 0) soma = soma + i;
    }

    if (num == soma) 
    {
        std::cout << num << " é um numero perfeito.\n";

    }else 
    {        
        std::cout << num << " não é um numero perfeito.";
    }
}
