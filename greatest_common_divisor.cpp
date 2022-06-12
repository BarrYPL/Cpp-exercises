#include <iostream>

using namespace std;

unsigned int gcd(unsigned int const a, unsigned int const b)
{
    return b == 0 ? a : gcd(b,a % b);
}

int main()
{
    unsigned int a = 0;
    unsigned int b;

    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> a;
    std::cout << "Podaj druga liczbe: ";
    std::cin >> b;

    std::cout << "Najwiekszy wspolny dzielnik to: " << gcd(a,b) << std::endl;
}
