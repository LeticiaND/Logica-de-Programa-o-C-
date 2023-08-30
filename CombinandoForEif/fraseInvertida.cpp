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
int main()
{
    //Neste exercício, você vai inverter a ordem das palavras em uma string.

    std::string frase = "vou estudar hoje";
    std::string fraseInvertida = "";
    std::vector<std::string> novasPalavras = split(" ", frase);

    for(int i = novasPalavras.size() -1; i >= 0; i--)
    {
        fraseInvertida += novasPalavras[i] + " ";
    }
    std::cout << fraseInvertida;
}