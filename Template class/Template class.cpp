#include <iostream>
template <typename T, typename P>
class Example
{
protected:
	T x;
	P y;
public:
	void setValues(T p_x, P p_y)
	{
		x = p_x;
		y = p_y;
	}

	void getValues()
	{
		std::cout << x << " , " << y << std::endl;
	}

};

int main()
{
	Example<int, std::string> ex_1;
	Example<float, int> ex_2;

	ex_1.setValues(5, "C++");
	ex_1.getValues();
	ex_2.setValues(2.5, 6) ;
	ex_2.getValues();

}
