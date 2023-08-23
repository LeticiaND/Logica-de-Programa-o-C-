#include <iostream>

int main ()
{
    //Gerar um padrão de números repetidos.
    //Escreva um programa que gere o seguinte padrão de números repetidos, onde o número de repetições em cada linha é igual ao número da linha:

    int sequenciaDeNumeros = 5; 
    for (int i = 1; i <= sequenciaDeNumeros; i++) // (o numero da lista(exc: 12345))continua enquanto i for menor ou igual a sequenciaDeNumeros.
    {
        for(int index = 1; index <= i; index++) //continua enquanto index for menor ou igual a i, que é o valor atual do loop externo. 
        {
            // lembresse que o ponto de partida é 1 mas depois ele passara a ser 2.
            std::cout << i; //responsavel por contar a quantidade de vezes do mesmo numero.

        }

    std::cout << std::endl;
    }
  
}