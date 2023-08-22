#include <iostream>

int main() {
    // Contar a quantidade de vogais em uma palavra.
    // Dado o nome "Leticia" imprimir o tatal das vogais e conssotantes de uma palavra:
    // vogal: 4
    // conssoante: 3
    std::string nome = "ffff";
    
    int volgal = 0;
    int conso = 0;
    for(int i = 0; i < nome.size(); i++)
    {
        char* letra = new char(nome[i]); // convertendo string para letra

        if(strcmp(letra, "a") == 0 || strcmp(letra, "e") == 0 ||strcmp(letra, "i") == 0  || strcmp(letra, "o") == 0  || strcmp(letra, "u") == 0) // validando vogais. (strcmp nesse caso serve para comparar se alguma letra do nome é igual a alguma vogal.)
        {
            volgal++; // incremento por um(se as letras forem iguais incrementa 1)
        }else
        {
            conso++;
        }
    }
    std::cout << "Resultado: " << volgal << "\n"; 
    std::cout << "Resultado: " << conso << "\n"; 

}