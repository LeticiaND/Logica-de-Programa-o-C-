#include <iostream>
#include <vector>
//limpar lista.
std::vector<int> limparLista(std::vector<int> lista)
{
    return std::vector<int>();
}

int main()
{
    std::vector<int> lista = {1,2,3,4,5};
    std::vector<int> resultado = limparLista(lista);

    if (resultado.empty())
    {
        std::cout << "vazia";
    } else 
    {
        std::cout << "tem valores";
    }

}