// Практика 2 задание 2
#include <iostream>

int main()
{
    float a, b;
    std::string n;
    std::cout<<"Число А, знак действия, число В:\n";
    std::cin >> a >> n >> b;
    if (n=="+"){
        std::cout<< a+b;
    }
    if (n=="-"){
        std::cout<< a-b;
    }
    if (n=="*"){
        std::cout<< a*b;
    }
    if (n=="/"){
        std::cout<< a/b;
    }
}
