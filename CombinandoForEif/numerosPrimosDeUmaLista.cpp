#include <iostream>
#include <vector>

std::vector<int> numerosPrimos (std::vector<int> lista)
{

    std::vector<int> temp;

    for(int i = 0; i < lista.size(); i++)
    {
        if(lista[i] >= 2 && lista[i] % 2 == 1)
        {
            temp.push_back(lista[i]);
        }
    }
    return temp;
}
int main()
{
    //Verificando números primos.
    std::vector<int> lista = {8, 19, 10, 23, 7, 13, 31};
    std::vector<int> resultado = numerosPrimos(lista);

    for (int valor : resultado)
    {
        std::cout << valor << "\n";
    }
}