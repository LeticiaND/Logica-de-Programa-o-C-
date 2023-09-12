#include <iostream>

int main ()
{
    //Determinar o maior de três números.

    int num1 = 9;
    int num2 = 4;
    int num3 = 3;

    int maiorNum = 0;
    if(num1 > num2 && num1 > num3)
    {
        maiorNum = num1;
    }else if(num2 > num1 && num2 > num3)
    {
        maiorNum = num2;
    }else
    {
        maiorNum = num3;
    }
    std::cout << maiorNum;
}