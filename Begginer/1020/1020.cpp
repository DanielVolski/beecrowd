#include <iostream>

int main()
{
    int input_in_days = 0, output_years = 0,
        output_months = 0, output_days = 0;

    std::cin >> input_in_days;

    output_years = (input_in_days / 365);
    output_months = (input_in_days % 365) / 30;
    output_days = (input_in_days % 365) % 30;

    std::cout << output_years << " ano(s)" << std::endl;
    std::cout << output_months << " mes(es)" << std::endl;
    std::cout << output_days << " dia(s)" << std::endl;

    return 0;
}