#include <iostream>


int main() {
    int x = 2147483647;
    long y = 2147483647;
    long long z = 2147483647;




    std::cout << "Wartość int: " << x << std::endl;
    std::cout << "Wartość long: " << y << std::endl;
    std::cout << "Wartość long long: " << z << std::endl;
    x++;
    y++;
    z++;
    //Wartość int zmieni się z 2147483647 na -2147483648, a nie na 2147483648 ponieważ po inkrementacji z początkowej wartośći dochodzimy do maksymalnego zakresu jaki może przechowywać zmienna int, więc cofamy się do początku zakresu//
    //wartość long również zmieni się na -2147483648, ponieważ posiada taki sam zakres jak zmienna int//
    //Wartość long long bez problemu zwiększy się o 1, ponieważ posiada większy zakres niż int oraz long//
    //Zjawisko, które można zaobserowować po inkrementacji wartośći int oraz long nazywa się przepełnieniem (overflow)
    std::cout << "Wartość int: " << x << std::endl;
    std::cout << "Wartość long: " << y << std::endl;
    std::cout << "Wartość long long: " << z << std::endl;

    std::cout << std::endl << "Zmienne unsigned:" << std::endl;

    unsigned int ux = 2147483647;
    unsigned long uy = 2147483647;
    unsigned long long uz = 2147483647;

    std::cout << "Wartość unsigned int: " << ux << std::endl;
    std::cout << "Wartość unsigned long: " << uy << std::endl;
    std::cout << "Wartość unsigned long long: " << uz << std::endl;
    ux++;
    uy++;
    uz++;
    //W tym przypadku możemy z sukcesem dokonać inkrementacji na wartościach int oraz long bez przepełnienia, pomimo, że zakres tych zmiennych jest taki sam, jednak w wersji bezznakowej nie obsługują one liczb ujemnych - zakres przesuwa się do przodu//

    std::cout << "Wartość unsigned int: " << ux << std::endl;
    std::cout << "Wartość unsigned long: " << uy << std::endl;
    std::cout << "Wartość unsigned long long: " << uz << std::endl;


    ux = 0;
    uy = 0;
    uz = 0;
    std::cout << "Wartość unsigned int: " << ux << std::endl;
    std::cout << "Wartość unsigned long: " << uy << std::endl;
    std::cout << "Wartość unsigned long long: " << uz << std::endl;
    ux--;
    uy--;
    uz--;
    //W tym przypadku wszystkie zmienne po dekrementacji z wartości 0 nie osiągną wartości -1, ponieważ są to zmienne w wersji bezznakowej i nie obsługują liczb ujemnych - zakres osiąga maksymalną wartość.//

    std::cout << "Wartość unsigned int: " << ux << std::endl;
    std::cout << "Wartość unsigned long: " << uy << std::endl;
    std::cout << "Wartość unsigned long long: " << uz << std::endl;


    return 0;
}

//C