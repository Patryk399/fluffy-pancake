#include <iostream>

class Bazowa
{
protected:
	int x;
public:
	virtual void display() = 0;

	void setX(int p_x)
	{
		x = p_x;
	}
};

class PochodnaY : public Bazowa
{
	protected:
		int y;
public:
	virtual void display()
	{
		std::cout << "x: " << x << std::endl;
		std::cout << "y: " << y << std::endl;
	}


	void setY(int p_y)
	{
		y = p_y;
	}
};

int main()
{
	//Bazowa b1; //B£¥D

	PochodnaY p1;
	p1.setX(5);
	p1.setY(10);
	p1.display();
}