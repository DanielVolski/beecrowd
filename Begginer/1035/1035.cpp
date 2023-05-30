#include <iostream>

int main()
{
    int a = 0, b = 0, c = 0, d = 0;

    std::cin >> a >> b >> c >> d;

    if (b > c and d > a and (c + d) > (a + b) and c > 0 and d > 0 and a % 2 == 0)
        std::cout << "Valores aceitos" << std::endl;
    else
        std::cout << "Valores nao aceitos" << std::endl;
    
    return 0;
}