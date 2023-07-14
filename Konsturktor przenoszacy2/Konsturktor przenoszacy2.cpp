#include <iostream>
#include <vector>

class Samochod
{
private:
	std::string marka;
	std::string model;
	float* spalanie;
public:
	Samochod(float p_spalanie)
	{
		spalanie = new float;
		*spalanie = p_spalanie;
		std::cout << "Konstruktor 1 dla spalania: " << p_spalanie << std::endl;
	}

	/*Samochod(const Samochod& obiekt) : Samochod(*obiekt.spalanie)
	{
		std::cout << "Konstruktor II - glebokiego kopiowania dla spalania: " << *obiekt.spalanie << std::endl;
	}*/
	Samochod(Samochod &&obiekt): spalanie(obiekt.spalanie)
	{
		std::cout << "Konsturktor III - przenieniesienia dla spalania: " << *obiekt.spalanie << std::endl;
		obiekt.spalanie = nullptr;
	}

	~Samochod()
	{ 
		/*std::cout << "Zwolniona zostala pamiec dla spalania: " << *spalanie << std::endl;*/
		if (spalanie != nullptr)
		{
			std::cout << "Destruktor dla spalania: " << *spalanie << std::endl;
		}
		else
		{
			std::cout << "destruktor dla nullptr" << std::endl;
		}
		delete spalanie;
	}
};
int main()
{
	std::vector<Samochod> spalanie_aut;

	spalanie_aut.push_back(Samochod(7.5));
	std::cout << std::endl;
	spalanie_aut.push_back(Samochod(8));
	std::cout << std::endl;

	return 0;
}