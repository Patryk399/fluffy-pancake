#include <iostream>
template <typename T, typename P>
class Dodawanie
{
protected:
	T value_1;
	P value_2;
public:
	Dodawanie(T p_value_1, P p_value_2)
	{
		value_1 = p_value_1;
		value_2 = p_value_2;
		std::cout << value_1 + value_2 << std::endl;
	}
};

int main()
{
	Dodawanie<int, int> ex_1(2, 5);
	Dodawanie<int, float> ex_2(4, 5.2);
	Dodawanie<std::string, std::string> ex_3("Mimba ", "Dzimba");

	return 0;
}