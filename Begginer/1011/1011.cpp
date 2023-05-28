#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    const double PI = 3.14159;
    double radius = 0., volume = 0.;

    std::cin >> radius;

    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    std::cout << "VOLUME = " << std::fixed << std::setprecision(3) << volume << std::endl;

    return 0;
}