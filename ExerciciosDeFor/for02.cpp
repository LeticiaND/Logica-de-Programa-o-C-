#include <iostream>

int main ()
{
    // Imprima os valores de uma lista usando for.
    int lista[6] = {5,5,8,1,564,6};
    int i;
    for(i = 0; i <= 5; i++) // o for ele quarga lugares entao o for so recebe valores, (o for ele guarda lugares de um cinema se voce quizer ocupar esses lugares tem que passar o valor que voce quer guardar)
    {
        std::cout << lista[i];
    }

    std::cout << "variavel i depois do loop: "<< i << "\n"; 
}