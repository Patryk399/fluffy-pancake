#include <iostream>
#define MAX(a, b) ((a>b) ? a : b)
#define MIN(a, b) ((a<b) ? a : b)
#define MAXVALUE 15
int main()
{
	int liczba_1, liczba_2, start;

	std::cout << "Podaj liczbe: ";
	std::cin >> liczba_1;
	std::cout << "Podaj druga liczbe: ";
	std::cin >> liczba_2;

	std::cout << "Wieksza wartosc: " << MAX(liczba_1, liczba_2) << std::endl;
	std::cout << "Mniejsza wartosc: " << MIN(liczba_1, liczba_2) << std::endl;

	std::cout << "Podaj wartosc poczatkowa wypisywania liczb: ";
	std::cin >> start;

	for (start; start <= MAXVALUE; start++)
	{
		std::cout << " | " << start;
	}
	std::cout << " | ";
	return 0;
}