#include <iostream>
#include <iomanip>

int main()
{
    double product_value = 0., value_to_pay = 0.;
    int product_id, units_bought = 0;

    for (int i = 0; i < 2; i++)
    {
        std::cin >> product_id >> units_bought >> product_value;
        value_to_pay = value_to_pay + units_bought * product_value;
    }

    std::cout << "VALOR A PAGAR: R$ "
              << std::fixed
              << std::setprecision(2)
              << value_to_pay
              << std::endl;

    return 0;
}