#include <iostream>
#include <string>

class Samochod
{
private:
	std::string marka;
	std::string model;
	float *spalanie;  //ZMIENNA WSKAZNIKOWA
public:
	Samochod() //Dynamiczne alkowanie pamieci
	{
		spalanie = new float;
	}

	Samochod(const Samochod& obiekt)
	{
		marka = obiekt.marka;
		model = obiekt.model;
		spalanie = new float;
		*spalanie = *(obiekt.spalanie);
	}
	void pobierzDane(std::string p_marka, std::string p_model, float p_spalanie)
	{
		marka = p_marka;
		model = p_model;
		*spalanie = p_spalanie;
	}
	void wyswietlanieDanych()
	{
		std::cout << "Marka: " << marka << std::endl;
		std::cout << "Model: " << model << std::endl;
		std::cout << "Spalanie: " << *spalanie << std::endl << std::endl;
	}

	~Samochod() //Zwalanie dynamicznie alkowanej pamieci 
	{
		delete spalanie;
	}
};

int main()
{
	Samochod s_1;

	s_1.pobierzDane("Volvo", "V40", 7.6);
	std::cout << "Obiekt zrodlowy: " << std::endl;
	s_1.wyswietlanieDanych();

	Samochod s_2(s_1);
	std::cout << "Obiekt kopiowany" << std::endl;
	s_2.wyswietlanieDanych();

	return 0;
}