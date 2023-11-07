#include <iostream>
#include <vector>

std::vector<int> limpandoLista(std::vector<int> lista)
{
    std::vector<int> recebe;

    return recebe;
}

int main()
{
    std::vector<int> lista = {1,2,3,4,5};
    std::vector<int> resultado = limpandoLista(lista);
    if (resultado.empty())
    {
        std::cout << "vazio";
    } else
    {
        std::cout << "contem valor";
    }

}