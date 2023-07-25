#include <iostream>
#include <memory>

class UnikalnyWskaznik
{
private:
	int liczba;
public:
	UnikalnyWskaznik()
	{
		std::cout << "Zaalokowano nowe miejsce w Pamiêci" << std::endl;
	}
	void setNumber(int p_liczba)
	{
		liczba = p_liczba;

	}
	void getNumber()
	{
		std::cout << "Liczba: " << liczba << std::endl;
	}

	~UnikalnyWskaznik()
	{
		std::cout << "Zwolniono miejsce w Pamieci" << std::endl;
	}
};
int main()
{
	UnikalnyWskaznik* b1 = new UnikalnyWskaznik;
	b1->setNumber(15);
	b1->getNumber();
	delete b1;

	std::cout << std::endl;
	std::unique_ptr <UnikalnyWskaznik> ptrs(new UnikalnyWskaznik);
	ptrs->setNumber(5);
	ptrs->getNumber();
	std::cout << ptrs.get() << std::endl << std::endl;

	ptrs->setNumber(8);
	ptrs->getNumber();
	std::cout << ptrs.get() << std::endl;
	return 0;
}