#include <iostream>

class Bazowa {};
class Pochodna: public Bazowa {};

int main()
{
	for (int i = 1; i <= 2; i++)
	{
		try
		{
			if (i == 1)
			{
				throw Bazowa();
			} 
			else if ( i == 2)
			{
				throw Pochodna();
			}
		}
		catch (Pochodna p)
		{
			std::cout << "Wyjatek klasy pochodnej zosta³ wy³apany" << std::endl;
		}
		catch (Bazowa b)
		{
			std::cout << "Wyjatek klasy bazowej zostal wylapany" << std::endl;
		}
	}
}
