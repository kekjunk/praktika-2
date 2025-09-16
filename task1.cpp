// Практика 2 задание 1
#include <iostream>

int main()
{
    int mine;
    double x, y;
    int n =1;
    std::cout<< "В первый день он отмыл(число X):\n";
    std::cin >> x;
    std::cout<< "Сумма, при которой ФНС заинтересуется Иваном Ивановичем(число Y):\n";
    std::cin >> y;
    while(x <= y) {
        ++n;
        x=x*1.1;
    }
    std::cout<<"ФНС заинтересуется Иваном Ивановичем:"<< n;
}
