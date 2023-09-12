#include <iostream>
#include <vector>
int main()
{
    //Verificando números primos.

    std::vector<int> lista = {8, 19, 10, 23, 7, 13, 2};

    for (int i = 0; i < lista.size(); i++) 
    {
        if (lista[i] >= 2 && lista[i] % 2 == 1) 
        {
            std::cout << lista[i] << "\n";
        } 
    }
}