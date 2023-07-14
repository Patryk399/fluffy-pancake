#include <iostream>
using namespace std;

class Print
{
public: 
    Print() {}
    Print(int p_liczba) //KOnsturktor z parametrami
    {
        cout << "Utworzono obiek z liczba o wartosci: " << p_liczba << endl;
    }
};

int main()
{
    Print p_1(5), p_2(10);



    return 0;
}

