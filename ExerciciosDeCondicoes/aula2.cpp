#include <iostream>
int main()
{
    // peça duas notas sendo a media 5 divida por dois e apresente para o usuario se ele passou ou reprovou
    // para realizar a validacao vale lembrar que (temos que somar as notas e depois fazer a divisao)
    int nota1 = 5;
    int nota2 = 2;

    int media = 5;

    if((nota1 + nota2) / 2 >= media)
    {
        std::cout << "Passou de ano";
    }else
    {
        std::cout << "Reprovou de ano";
    }
}