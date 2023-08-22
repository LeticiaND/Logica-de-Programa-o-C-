#include <iostream>

int main ()
{
    std::string letra[5] = {"L","E","T","I","C"};

    letra[3] = "I";

    std::string letras = letra[3];

    letra[0] = "R";
    letra[1] = "A";
    letra[2] = "F";
    letra[3] = "A";
    letra[4] = "E";

    std::cout << letras;
}