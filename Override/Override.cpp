#include <iostream>

class Bazowa
{
public:
	virtual void display() const
	{
		std::cout << "Bazowa - display" << std::endl;
	}
};

class PochodnaX final: public Bazowa
{
public:
	virtual void display() const /*override*/
	{
		std::cout << "PochodnaX - display" << std::endl;
	}
};

class PochodnaY 
{
public:
	 void display() const 
	{
		std::cout << "PochodnaY - display" << std::endl;
	}
};

int main()
{
	Bazowa* ptr_1 = new Bazowa();
	ptr_1->display();

	PochodnaX* ptr_2 = new PochodnaX();
	ptr_2->display();

	Bazowa* ptr_3 = new PochodnaX();
	ptr_3->display();

	return 0;
}