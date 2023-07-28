#include <iostream>



//template <typename T>
//T getValue(T a)
//{
//	return a;                                  //EXEMPLE 1
//}
//int main()
//{
//	std::cout << getValue(4) << std::endl;
//	std::cout << getValue(5.5F) << std::endl;
//	std::cout << getValue("C++") << std::endl;
//}
template <typename T>
void getMin(T a, T b, T c)
{
	if (a < b && a < c )
	{
		std::cout << a << std::endl;
	}
	else if (b < c && b < a)
	{
		std::cout << b << std::endl;
	} 
	else
	{
		std::cout << c << std::endl;
	}
}
int main()
{
	getMin(3, 8, 4);
	getMin(2.4, 6.5, 7.7);
	getMin('S', 'S', 'F');
}