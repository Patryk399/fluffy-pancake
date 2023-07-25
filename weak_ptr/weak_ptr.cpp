#include <iostream>
#include <memory>

int main()
{
	std::weak_ptr <float> w_ptr;
	std::cout << "Adres: " << w_ptr.lock() << std::endl;

	{
		std::shared_ptr <float> s_ptr(new float); //ZAKRES
		w_ptr = s_ptr;
		std::cout << "Adres: " << w_ptr.lock() << std::endl;

	}

	std::cout << "Adres: " << w_ptr.lock() << std::endl;
}
