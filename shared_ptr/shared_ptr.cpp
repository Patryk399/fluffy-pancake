#include <iostream>
#include <memory>

class WspoldzielonyWskaznik
{
private:
	int liczba;
public:
	WspoldzielonyWskaznik()
	{
		std::cout << "Zaalokowano nowe miejsce w Pamiêci" << std::endl;
	}
	void setNumber(int p_liczba)
	{
		liczba = p_liczba;

	}
	int getNumber()
	{
		return liczba;
	}

	~WspoldzielonyWskaznik()
	{
		std::cout << "Zwolniono miejsce w Pamieci" << std::endl;
	}
};
int main()
{
	std::shared_ptr <WspoldzielonyWskaznik> ptrs_1(new WspoldzielonyWskaznik);
	ptrs_1->setNumber(15);

	std::cout << std::endl << "Wartosc wskaznika ptrs_1: " << ptrs_1->getNumber() << std::endl;
	std::cout << "Adres wskaznika ptrs_1: " << ptrs_1.get() << std::endl;
	std::cout << "Ilosc referencji: " << ptrs_1.use_count() << std::endl;

	std::shared_ptr <WspoldzielonyWskaznik> ptrs_2(ptrs_1);
	std::cout << std::endl << "Wartosc wskaznika ptrs_1: " << ptrs_2->getNumber() << std::endl;
	std::cout << "Adres wskaznika ptrs_2: " << ptrs_2.get() << std::endl;
	std::cout << "Ilosc referencji: " << ptrs_2.use_count() << std::endl;
	ptrs_1.reset();
	std::cout << "Ilosc referencji: " << ptrs_1.use_count() << std::endl;
	return 0;
}