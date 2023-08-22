#include <iostream>

int main ()
{
    // Criar dois vetores sendo um int e outro string e os dois tem que armazenar 5 posicoes.
    //(lembrando que como passamos 4 posicoes para o nosso vetor o numero 4 nao faz parte do nosso algoritmo por que comecacos a contar o numero 0 ou seja 0 passa a contar como um numero)
    //int vet[4];
    // Atribuir valor para o vetor
    //vet[0] = 5;
    //vet[1] = 10;
    // Quando criamos o vetor e ja passamos valor para ele todas as outras posicoes se tornan 0
    int vet1[4] = {5,10};
    // Podemos usar o for para poder mostrar os valores das posicoes.
    for (int i = 0; i < 4; i++)
    {
        //std::cout << vet1[i];
    }

    int x = sizeof(vet1) / sizeof(int);
    int y = sizeof(int);
    std::cout << "Tamanho de inteiro: " << y << "\n";  
    std::cout << "Quantidade de elementos do vetor: " << x;
    // Quando nao passamos quantas posicoes ira ter no vetor e passamos os valores exc(5,10) ele entende que o tamanho da nossa lista é 2 por conta que passamos apenas dois valores.
    //int vet2[] = {5,10};
    // Imprir valor do vetor
    //std::cout << vet1[1]; 

   
}