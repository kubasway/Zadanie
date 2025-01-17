// Zadanie7.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Witaj! To jest program, ktory obliczy pole okregu na podstawie wartosci promienia r, ktory podasz w nastepnym kroku\n";
    cout << "Podaj promien r:\n";
    double r;
    cin >> r;
    double pole;
    pole = 3.14 * r * r;
    cout << "Pole okregu o promieniu " << r << " cm Wynosi: " << pole << " cm kwadratowych";
    return 0;
}