#include <iostream>

class Print {
private:
	int number;
public:
	Print(int p_number): number(p_number) {}


	void operator +()
	{
		number++;
		std::cout << "Liczba po zwiekszeniu o 1: " << number << std::endl;
	}
	void operator ++()
	{
		number++;
		number++;
		std::cout << "Liczba po zwiekszeniu o 2: " << number << std::endl;

	}
};
int main()
{
	Print p_1(6);
	+p_1;
	++p_1;
	
	
	
	
	
	return 0;

}