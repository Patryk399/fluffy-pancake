#include <iostream>

class Bazowa
{
public:
	 virtual void display() const 
	{
		std::cout << "Klasowa bazowa - display" << std::endl;
	}
	 virtual ~Bazowa()
	 {
		 std::cout << "Bazowa - destruktor" << std::endl;
	 }
};

class PochodnaX : public Bazowa
{
public:
	virtual void display() const
	{
		std::cout << "PochodnaX - display" << std::endl;
	}

	virtual ~PochodnaX()
	{
		std::cout << "PochodnaX-destruktor" << std::endl;
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
		std::cout << "Pochodna Y - destruktor" << std::endl;
	}
};
void displayInfo(const Bazowa& obiekt)
{
	std::cout << "Info: ";
	obiekt.display();
}
int main()
{
	/*
	Bazowa b1;
	b1.display();
	PochodnaX p1;
	p1.display();

	std::cout << std::endl;

	displayInfo(b1);
	displayInfo(p1);

	std::cout << std::endl;

	Bazowa* ptr = new PochodnaX();
	ptr->display();*/

	Bazowa* bazowa = new Bazowa();
	Bazowa* pochodna_x = new PochodnaX();
	Bazowa* pochodna_y = new PochodnaY();

	bazowa->display();
	pochodna_x->display();
	pochodna_y->display();

	delete bazowa;
	delete pochodna_x;
	delete pochodna_y;
	


	return 0;

}