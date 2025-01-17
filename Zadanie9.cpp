#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {
    time_t czas;
    struct tm czas_info;

    time(&czas);
    localtime_s(&czas_info, &czas);

    int numerDniaTygodnia = czas_info.tm_wday;
	if (argc >= 2) {
		numerDniaTygodnia = atoi(argv[1]);
	}
	switch (numerDniaTygodnia)

	{
	case 0:
		cout << "Niedziela";
		break;
	case 1:
		cout << "Poniedzialek";
		break;
	case 2:
		cout << "Wtorek";
		break;
	case 3:
		cout << "Sroda";
		break;
	case 4:
		cout << "Czwartek";
		break;
	case 5:
		cout << "Piatek";
		break;
	case 6:
		cout << "Sobota";
		break;
	default:
		cout << "Nie znam liczby";
	};

	//return 0;
    // tm_wday zwraca wartości od 0 (niedziela) do 6 (sobota)
    //std::cout << "Numer dnia tygodnia (0 - niedziela, 1 - poniedzialek, ..., 6 - sobota): " << numerDniaTygodnia << std::endl;

    return 0;
}


//Kubaa//