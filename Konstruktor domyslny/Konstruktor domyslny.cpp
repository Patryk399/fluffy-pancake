#include <iostream>
using namespace std;

class Samochod
{
private: //Atrybuty
	string marka;
	string model;
	float spalanie;
public:
	Samochod(string p_marka, string p_model, float p_spalanie) //Konstruktor sparametryzowany
	{
		marka = p_marka;
		model = p_model;
		spalanie = p_spalanie;

	}
	//Samochod() //Konsturktor domyslny
	//{
	//	marka = "Nie podano";
	//	model = "Nie podano";
	//	spalanie = 0;
	//}
	//void pobieranieDanych() //metoda
	//{
	//	cout << "Podaj marke: " ;
	//	cin >> marka;
	//	cout << "Podaj model: " ;
	//	cin >> model;
	//	cout << "Podaj spalanie: " ;
	//	cin >> spalanie;
	//}
	void wyswietlanieDanych() //metoda
	{
		cout << "Marka: " << marka << endl;
		cout << "Model: " << model << endl;
		cout << "spalanie:  " << spalanie << " Litrow" << endl << endl;
	}

};
int main()
{
	Samochod s_1("Audi", "a5", 9);

	s_1.wyswietlanieDanych();

	/*s_1.pobieranieDanych();
	s_1.wyswietlanieDanych();

	
	s_2.wyswietlanieDanych();*/
	return 0;
}