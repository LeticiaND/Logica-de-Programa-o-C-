#include <iostream>
#include <vector>
int main()
{
    //FAZER!!!!!!!!!!!!!
    //Localizando o maior número em uma lista.

    std::vector<int> lista = {1,3,5,6,77,8,9};
    int recebe = 0;
    //int maiorNumero = lista[1];//posicao da lista

    for(int i = 0; i < lista.size(); i++)
    {
        for(int k = 0; k < lista.size(); k++)
        {
            if(lista[i] > lista[k])
            {
                
                std::cout << lista[i] << "\n";
            }
            
        }
    }
   
}