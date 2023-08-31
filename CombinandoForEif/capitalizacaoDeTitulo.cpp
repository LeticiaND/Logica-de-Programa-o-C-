#include <iostream>
#include <vector>
#include <cctype>

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

std::string capitalizar(std::string frase) 
{
    std::vector<std::string> novasPalavras = split(" ", frase);//trasformando a frase em palavras.
    std::string remontando = ""; //variavel recebe as palavras.

    for(int i = 0; i < novasPalavras.size(); i++)//acesando as palavras
    {
        
        for (int k = 0; k < novasPalavras[i].length(); k++)//acessando as letras
        {
            if (k == 0) //entao se k for igual a 0 por que cada palavra comeca com o 0 
            {
                remontando += (char) toupper(novasPalavras[i][k]);                 
            } else 
            {
                remontando += novasPalavras[i][k];//"se nao" pega as minusculas e joga para a variavel.
            }

        }
        remontando += " ";
    }
    return remontando;
}

int main()
{
    //Neste exercício, você vai converter uma string para o formato de título, capitalizando a primeira letra de cada palavra.

    std::string frase = "eu estou testando para ver se funciona com qualquer frase independente do tamnho";
  
    std::cout << capitalizar(frase);
} 