#include <iostream>

// METODO / FUNÇÃO

/*

- Declaracao do metodo (funcao)

-- tipo de retorno / nome / parametros (opcionais) / chaves / retorno (opcioanal)

*/

int somar (int a, int b) 
{ // inicio do bloco 

    return a + b;

} // fim do bloco

void printResult(int result) 
{
    std::cout << "Resultado: " << result << "\n";
}

/*

- Chamada do metodo (funcao)

-- nome / parametros (opcionais)

*/

int main ()
{
    int resultado = somar(10,5);

    printResult(resultado);
}
