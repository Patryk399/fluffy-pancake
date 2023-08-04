#include <iostream>
#include <deque>

void wyswietl(std::deque <int> kolejka)
{
	for (int i = 0; i < kolejka.size(); i++)
	{
		std::cout << " |  " << kolejka[i];
	}
	std::cout << " | " << std::endl;
}

int main()
{
	std::deque <int> liczby {10, 20, 30, 40, 50};

	liczby.push_back(10);
	liczby.push_back(20);

	std::cout << "\nLiczby - po metodach pusch_back(10) oraz push_back(20): ";
	wyswietl(liczby);

	liczby.pop_front();
	liczby.pop_front();
	std::cout << "\nLiczby - po metodach pop_front(): ";
	wyswietl(liczby);
}
