#include <iostream>


int main()
{
	std::string imie;
	std::cout << "Podaj imie: ";
	std::cin >> imie;

	try
	{
		if (imie == "Aleksandra")
		{
			throw std::string("Imie Aleksandra jest zablokowane");
		}

		if (imie == "Kuba")
		{
			throw std::string("Imie kuba jest zablokowane");
		}

		std::cout << "imie: " << imie << std::endl;
	}
	catch (std::string &exc)
    {
		std::cout << exc << std::endl;
	}
}