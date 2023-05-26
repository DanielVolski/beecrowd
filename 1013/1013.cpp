#include <iostream>
#include <cmath>

#define V_SIZE 3

int max(int *v)
{
    int max = v[0];

    for (int i = 1; i < V_SIZE; i++)
        if (v[i] > max)
            max = v[i];
    return max;
}

int main()
{
    int v[V_SIZE] = { 0 };

    for (int i = 0; i < V_SIZE; i++)
        std::cin >> v[i];

    std::cout << max(v) << " eh o maior" << std::endl;
}