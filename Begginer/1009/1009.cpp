#include <iostream>
#include <iomanip>

int main()
{
    std::string name;
    double salary = 0., total_sold = 0., total_salary = 0.;

    std::cin >> name >> salary >> total_sold;

    total_salary = salary + total_sold * 0.15;

    std::cout << "TOTAL = R$ "<< std::fixed << std::setprecision(2) << total_salary << std::endl;
    
    return 0;
}