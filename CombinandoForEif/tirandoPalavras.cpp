#include <iostream>
#include <vector>
//TERMINAR!!!!!!!!!!!!!!!!!!!!!!
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

std::string substituirPalavraProibida (std::string novaFrase)
{
    std::vector<std::string> palavrasProibidas = {"idiota", "louco", "besta", "retardado"};
    //std::string palavraSubstituir = "palavra proibida";
    std::vector<std::string> novasPalavras = split(" ", novaFrase);
    std::string palavraFinal = "";
    for(int i = 0; i < novasPalavras.size(); i++)
    {
        //std::cout << novasPalavras[i];
        for(int k = 0; k < palavrasProibidas.size(); k++)
        {
            if(novasPalavras[i] == palavrasProibidas[k]) 
            {
                std::string censura = "";

                for (int j = 0; j < novasPalavras[i].length() - 1; j++)
                {
                    censura += "*";
                }

                novasPalavras[i] = censura;
            }
        }
        palavraFinal += novasPalavras[i] + " ";
    }

    return palavraFinal;
}

int main()
{
    std::string novaFrase = "eu retardado sou um";
    std::string resultado =  substituirPalavraProibida(novaFrase);
    std::cout << resultado;
}

    