#include <iostream>

int main ()
{
    // Criar dois vetores sendo um int e outro string e os dois tem que armazenar 5 posicoes.
    //(lembrando que como passamos 4 posicoes para o nosso vetor o numero 4 nao faz parte do nosso algoritmo por que comecamos a contar o numero 0 ou seja 0 passa a contar como um numero)
    //int vet[4];

    //vet[0] = 5;
    //vet[1] = 10;

    int vet1[4] = {5,10};

    for (int i = 0; i < 4; i++)
    {
        //std::cout << vet1[i];
    }

    int x = sizeof(vet1) / sizeof(int);
    int y = sizeof(int);
    std::cout << "Tamanho de inteiro: " << y << "\n";  
    std::cout << "Quantidade de elementos do vetor: " << x;

    //int vet2[] = {5,10};

    //std::cout << vet1[1]; 

   
}