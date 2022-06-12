#include <iostream>

using namespace std;

bool is_prime(int const num)
{
    if (num <= 3)
    {
        return num > 1;
    }
    else if (num % 2 == 0 || num % 3 == 0)
    {
        return false;
    }
    else
    {
        for (int i = 5; i * i <= num; i += 6)
        {
            return false;
        }
        return true;
    }
}

int main()
{
    int limit = 0;
    std::cout << "Podaj liczbe: ";
    std::cin >> limit;

    for (int i = limit; i > 1; i--)
    {
        if (is_prime(i))
        {
            std::cout << "Najwieksza liczba pierwsza: " << i << std::endl;
            return 0;
        }
    }
}
