#include <iostream>

class Bazowa
{
public:
	int x = 0;

	void dodaj(int p_x)
	{
		x += p_x;
	}

	void odejmij(int p_x)
	{
		x -= p_x;
	}
};

class PochodnaX: public Bazowa {};

void wyswietl(const Bazowa& obiekt)
{
	std::cout << obiekt.x << std::endl;
}

int main()
{
	Bazowa b;
	Bazowa& ref_b = b;

	std::cout << "Obiekt b: ";
	wyswietl(b);

	ref_b.dodaj(15);

	std::cout << "Obiekt b: ";
	wyswietl(b);
	std::cout << "Referencja ref_b"; 
	wyswietl(ref_b);

	b.odejmij(10);
	wyswietl(b);
	std::cout << "Referencja ref_b";
	wyswietl(ref_b);

	PochodnaX p;
	Bazowa& ref_p = p;

	std::cout << std::endl;
	std::cout << "Obiekt p: ";
	wyswietl(p);
	p.dodaj(100);

	std::cout << "Referncja ref_p: ";
	wyswietl(ref_p);

	return 0;


}