#include <iostream>
#include <string>
class Words
{
private:
	std::string word_one, word_two;
public:
	Words(std::string w1, std::string w2)
	{
		word_one = w1;
		word_two = w2;
	}

	Words(const Words& obiekt)
	{
		word_one = obiekt.word_one;
		word_two = obiekt.word_two;
	}
	std::string displayWordOne()
	{
		return word_one;
	}
	std::string displayWordTwo()
	{
		return word_two;
	}
};
int main()
{
	Words word_1("C", "C++");
	Words word_2 = word_1;

	std::cout << word_1.displayWordOne() << std::endl << word_1.displayWordTwo() << std::endl;
	std::cout << word_2.displayWordOne() << std::endl << word_2.displayWordTwo() << std::endl;

	return 0;
}