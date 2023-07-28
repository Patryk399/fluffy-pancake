#include <iostream>
#include <vector>

template <typename T>
void wypisz(std::vector <T> wektor)
{
    for (int i = 0; i != wektor.size(); i++)
    {
        std::cout << " | " << wektor[i];
    }

    std::cout << " | " << std::endl;
}

int main()
{
    std::vector <int> liczby {1, 2, 3, 4, 3, 4, 5, 67, 8};
    std::vector <char> znaki {'g', 'y', 'g'};

    std::vector <int>::iterator it_1 = liczby.begin();
    std::vector <char>::iterator it_2 = znaki.begin();

  
    std::cout << std::endl << "Liczby - pierwszy element: " << *it_1 << std::endl;
    std::cout << "Znaki - pierwszy element: " << *it_2 << std::endl;

    it_1 = liczby.end() - 1;
    it_2 = znaki.end() - 1;

    std::cout << std::endl << "Liczby - ostatni element: " << *it_1 << std::endl;
    std::cout << "Znaki - ostatni element: " << *it_2 << std::endl;

    std::cout << std::endl << "Liczby - rozmiar: " << liczby.size() << std::endl;
    std::cout << "Znaki - rozmiar: " << znaki.size() << std::endl;

    std::cout << std::endl << "Liczby - rozmiar: " << liczby.size() << std::endl;
    std::cout << "Znaki - rozmiar: " << znaki.size() << std::endl;

    std::cout << std::endl << "Liczby - trzeci element: " << liczby[2] << std::endl;
    std::cout << "Znaki: " << znaki[3] << std::endl;

    std::cout << std::endl << "Liczby - wszystkie elementy: ";
    wypisz(liczby);
    std::cout << "Znaki : ";
    wypisz(znaki);

    liczby.assign(3, 12);
    znaki.assign(4, 'x');
    std::cout << std::endl << "Liczby - po metodzie assign(3 , 15)";
    wypisz(liczby);
    std::cout << "Znaki: ";
    wypisz(znaki);

    liczby.pop_back();
    std::cout << std::endl << "Liczby: ";
    wypisz(liczby);

    liczby.push_back(2);
    std::cout << std::endl << "Liczby: ";
    wypisz(liczby);

    liczby.clear();
    std::cout << std::endl << "Liczby: ";
    wypisz(liczby);
 }

