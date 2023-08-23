#include <iostream> 
#include <regex>
using namespace std;
int main()
{
    std::string senha = "#Geks13";
    const regex padrao("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[-+_!@#$%^&*.,?])(?!.*\\s).{1,8}$");
    

    if(regex_match(senha, padrao))
    {
        std::cout << "Yes";
    }
    else
    {
        std::cout << "No";
    }
    
}
    

