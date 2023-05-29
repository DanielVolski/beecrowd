#include <iostream>

#define MAX_NOTES 7

int main()
{
    int input = 0, remainder = 0;
    int quantity_notes[MAX_NOTES] = { 0 };
    int banknotes[MAX_NOTES] = { 100, 50, 20, 10, 5, 2, 1 };

    std::cin >> input;
    std::cout << input << std::endl;

    remainder = input;

    for (int i = 0; i < MAX_NOTES; i++)
    {
        quantity_notes[i] = remainder / banknotes[i];
        remainder = remainder % banknotes[i];
        std::cout << quantity_notes[i] << " nota(s) de R$ " << banknotes[i] << ",00" << std::endl;
    }

    return 0;
}