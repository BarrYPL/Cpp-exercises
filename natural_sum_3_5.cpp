#include <iostream>

using namespace std;

int main()
{
    unsigned int limit = 0;
    std::cout << "Ograniczenie gorne: ";
    std::cin >> limit;

    unsigned long long sum = 0;

    //No point of checking numbers less than 3;
    for (unsigned int i = 3; i < limit; i++){
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }
    std::cout << "suma = " << sum << std::endl;
}
