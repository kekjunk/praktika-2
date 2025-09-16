// Практика 2 задание 3
#include <iostream>

int main()
{
    int a, b;
    std::cout<<"Enter number A and B: \n";
    std::cin >> a >> b;
    while(a>b){
        if (a%2==0 && a/2 > b){
            a=a/2;
            std::cout << ":2\n";
        }
        else{
            a=a-1;
            std::cout << "-1\n";
            
        }
    }
    
    std::cout << "Done!";    
}
    
