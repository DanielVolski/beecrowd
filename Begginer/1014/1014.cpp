#include <iostream>
#include <iomanip>

int main()
{
    int total_distance = 0;
    double fuel_spent = 0.;

    std::cin >> total_distance >> fuel_spent;

    std::cout << std::fixed << std::setprecision(3)
              << (total_distance / fuel_spent) 
              << " km/l" 
              << std::endl;

    return 0;
}