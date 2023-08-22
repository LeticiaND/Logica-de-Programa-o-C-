#include <iostream>

int main()
{
    int num = 3; 
    int soma = 0;

    for(int i = 1; i < num; ++i){
    if (num % i == 0) soma = soma + i;
    }
    if (num == soma) {
        printf("%d é um numero perfeito.\n",num);

    }else {        
        printf("%d não é um numero perfeito.",num);
    }
    return 0;
}
