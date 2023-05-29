#include <iostream>

int main()
{
    int input_in_secs = 0, time_in_hours = 0, 
        time_in_min = 0, time_in_secs = 0;

    std::cin >> input_in_secs;

    time_in_hours = input_in_secs / 3600;
    time_in_min = (input_in_secs % 3600) / 60;
    time_in_secs = input_in_secs % 60;

    std::cout << time_in_hours << ":" << time_in_min << ":" << time_in_secs << std::endl;    

    return 0;
}