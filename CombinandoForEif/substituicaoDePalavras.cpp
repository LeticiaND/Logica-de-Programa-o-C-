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
    //Neste exercício, você vai substituir todas as ocorrências de uma palavra por outra em uma string.

    std::string frase = "Eu vou estudar hoje, e vou estudar amanha";
    std::string palavra = "estudar";
    std::string palavraSubstituir = "trabalhar";
    std::string remontandoFrase = "";

    std::vector<std::string> novasPalavras = split(" ", frase);

    for(int i = 0; i < novasPalavras.size(); i++)
    {
        if(novasPalavras[i] == palavra)
        {
            remontandoFrase += palavraSubstituir;
        }else
        {
            remontandoFrase += novasPalavras[i];
        }
        remontandoFrase += " ";
    }
    
// segunda forma de fazer.
    for(int i = 0; i < novasPalavras.size(); i++)
    {
        if(novasPalavras[i] == palavra)
        {
            novasPalavras[i] = palavraSubstituir;
        }

        remontandoFrase += novasPalavras[i] + " ";
    }

    std::cout << remontandoFrase;
}