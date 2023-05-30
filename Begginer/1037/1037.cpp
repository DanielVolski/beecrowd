#include <iostream>

int main()
{
    double input = 0.;

    std::cin >> input;

    if (input >= 0. and input <= 25.)
        std::cout << "Intervalo [0,25]" << std::endl;
    else if (input > 25. and input <= 50)
        std::cout << "Intervalo (25,50]" << std::endl;
    else if (input > 75. and input <= 100.)
        std::cout << "Intervalo (75,100]" << std::endl;
    else
        std::cout << "Fora do intervalo" << std::endl;

    return 0;
}