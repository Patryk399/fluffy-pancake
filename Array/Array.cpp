#include <iostream>
#include <array>

int main()
{
    std::array <int, 0> liczby_1;
    std::array <int, 5> liczby_2 {5, 4, 3, 2, 1};

    std::cout << "Liczby_2 - metoda at(2): ";
    std::cout << liczby_2.at(2) << std::endl;
    
    std::cout << "\nLiczby_2 - operator [0]: ";
    std::cout << liczby_2[0];

    std::cout << std::endl << "Liczby_2 - metoda get<2> (liczby_2): ";
    std::cout << std::get<2>(liczby_2) << std::endl;

    std::cout << "\nliczby_2 - metoda fill(3): ";
    liczby_2.fill(3);
    for (int i = 0; i < 5; i++)
    {
        std::cout << " | " << liczby_2[i];
    }
    std::cout << " | " << std::endl;
}
