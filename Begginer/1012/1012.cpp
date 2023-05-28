#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double points[3] = { 0. };
    const double PI = 3.14159;
    double tria_area = 0., circ_area = 0.,
           trap_area = 0., squa_area = 0.,
           rect_area = 0.;

    for (int i = 0; i < (sizeof(points) / sizeof(double)); i++)
        std::cin >> points[i];

    tria_area = (points[0] * points[2]) / 2;
    circ_area = PI * points[2] * points[2];
    trap_area = ((points[0] + points[1]) * points[2]) / 2;
    squa_area = points[1] * points[1];
    rect_area = points[0] * points[1];

    std::fixed;
    std::setprecision(3);

    std::cout << "TRIANGULO: " << std::fixed << std::setprecision(3) << tria_area << std::endl
              << "CIRCULO: "   << std::fixed << std::setprecision(3) << circ_area << std::endl 
              << "TRAPEZIO: "  << std::fixed << std::setprecision(3) << trap_area << std::endl
              << "QUADRADO: "  << std::fixed << std::setprecision(3) << squa_area << std::endl
              << "RETANGULO: " << std::fixed << std::setprecision(3) << rect_area << std::endl;
    return 0;
}