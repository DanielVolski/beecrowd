#include <iostream>
#include <iomanip>

int main()
{
    int const km_per_liter = 12;
    int hours_spent = 0, avg_speed = 0;
    double result = 0.;

    std::cin >> hours_spent >> avg_speed;

    result = (double) (avg_speed * hours_spent) / km_per_liter;

    std::cout << std::fixed << std::setprecision(3) << result << std::endl;

    return 0;
}