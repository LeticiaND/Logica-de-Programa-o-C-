#include <iostream>

int main()
{
    // Pedir para o usuario digitar a letra F ou a letra M e printar F(feminino) M(masculino) e caso nao for nemhum deses printar sexo invalido
    
    std::string genero = "C";

    if(genero == "M")
    {
        std::cout << "Masculino";
    }else if(genero == "F")
    {
        std::cout << "Feminino";
    }else
    {
        std::cout << "Sexo invalido";
    }
    
}