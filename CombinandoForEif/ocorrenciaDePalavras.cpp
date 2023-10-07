#include <iostream>
#include <vector>

std::vector<std::string> split(const char separator[], std::string text) 
{
    std::vector<std::string> splitted;
    std::string word = "";

    for (int i = 0; i <= text.length(); i++) 
    {   

        char* letter = new char(text[i]);

        if (strcasecmp(letter, separator) != 0 && i != text.length()) 
        {
            word += text[i];
            continue;
        } 

        splitted.push_back(word);
        word = "";

    }

    return splitted;

}

void printList(std::vector<std::string> texts) 
{
    std::cout << "[ ";
    for (int i = 0; i < texts.size(); i++)
    {
        std::cout << texts[i] << ", ";
    }
    std::cout << "]";
} 

int QuantidadeDePalavras (std::string palavra, std::string frase)
{
    std::vector<std::string> palavras = split(" ", frase);

    int quantidadeDePalavras = 0;

    for(int i = 0; i < palavras.size(); i++)
    {
        if(palavras[i] == palavra)
        {
            quantidadeDePalavras++;
        }
    }
    return quantidadeDePalavras;
}
int main ()
{
    //Neste exercício, você vai contar quantas vezes uma determinada palavra aparece em uma string.

    std::string palavra = "nada";
    std::string frase = "eu te amo eu te adoro";
    
    int resultado = QuantidadeDePalavras(palavra,frase);
    std::cout << resultado;
}