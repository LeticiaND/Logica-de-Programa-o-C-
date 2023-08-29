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
    std::string novaFrase = "eu sou um idiota";
    std::vector<std::string> palavrasProibidas = {"idiota", "louco", "besta"};
    std::vector<std::string> novasPalavras = split(" ", novaFrase);

    for(int i = 0; i < novasPalavras.size(); i++)
    {
        
        for(int k = 0; k < palavrasProibidas.size(); k++)
        {
            if(novasPalavras[i] == palavrasProibidas[k]) {
                std::cout << "achei";
            }
        }

    }
}

    