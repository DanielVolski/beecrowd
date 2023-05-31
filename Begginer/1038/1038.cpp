#include <iostream>
#include <iomanip>

int main()
{
    int product_code = 0, product_qt = 0;
    double total_to_pay = 0.;
    double product_prices[5] = { 4., 4.5, 5., 2., 1.5 };

    std::cin >> product_code >> product_qt;

    total_to_pay =  product_prices[product_code - 1] * product_qt;
    
    std::cout << std::fixed << std::setprecision(2) << "Total: R$ " << total_to_pay << std::endl; 
    
    return 0;
}