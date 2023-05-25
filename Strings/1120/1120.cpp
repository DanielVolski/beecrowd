#include <iostream>

int main()
{
    std::string n;
    char d;

    std::cin >> d >> n;

    for (int i = 0; i < n.size(); i++)
    {
        std::cout << (n[i] == d) << std::endl;
        if (n[i] == d)
            n.erase(i, 1);
    }
    std::cout << n << std::endl;
    return 0;
}