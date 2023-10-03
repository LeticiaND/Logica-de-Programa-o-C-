#include <iostream>
#include <vector>
int main()
{
    //Média de números em uma lista.

    std::vector<int> lista = {10,20,30,40,50};
    int soma = 0;
    for(int i = 0; i < lista.size(); i++)
    {
        soma += lista[i];
    }
    std::cout << soma /2;
}