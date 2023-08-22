#include <iostream>

int main()
{
    //soma dos digitos (separando cada numero)
    int num = 123;
    int soma = 0;
    while(num > 0)
    {
        printf("%d - ",num % 10);
        num = num/10;
        
    }
   
  
}