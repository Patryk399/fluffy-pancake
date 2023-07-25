#include <iostream>
#include <vector>

class Bazowa
{
public:
	virtual void display() const
	{
		std::cout << "Bazowa - display" << std::endl;
	}

	virtual ~Bazowa()
	{
		std::cout << "Bazowa - destruktor " << std::endl;
	}



};
class PochodnaX : public Bazowa
{
public:
	virtual void display() const
	{
		std::cout << "PochodnaX - display " << std::endl;
	}
	virtual ~PochodnaX()
	{
		std::cout << "PochodnaX - destruktor" << std::endl;
	}
};
class PochodnaY : public Bazowa
{
public:
	virtual void display() const
	{
		std::cout << "PochodnaY - display" << std::endl;
	}
	virtual ~PochodnaY()
	{
		std::cout << "PochodnaY - destruktor " << std::endl;
	}
};

int main()
{
	Bazowa* bazowa = new Bazowa();
	Bazowa* pochodna_x = new PochodnaX();
	Bazowa* pochodna_y = new PochodnaY();

	bazowa->display();
	pochodna_x->display();
	pochodna_y->display();

	Bazowa* tab_obiektow[] = { bazowa, pochodna_x,pochodna_y };
	std::cout << std::endl;

	for (auto i = 0; i < 3; i++)
	{
		tab_obiektow[i]->display();
	}

	tab_obiektow[1] = bazowa;
	
	std::cout << std::endl;
	
	for (auto i = 0; i < 3; i++)
	{
		tab_obiektow[i]->display();
	}
	
	std::vector <Bazowa*> wector_obiektow{bazowa, pochodna_x, pochodna_y};
	std::cout << std::endl;

	for (auto vector_ptr : wector_obiektow)
	{
		vector_ptr->display();
	}
	std::cout << std::endl;

	delete bazowa;
	delete pochodna_x;
	delete pochodna_y;
	return 0;
}