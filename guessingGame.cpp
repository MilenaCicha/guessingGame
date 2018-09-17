#include <iostream>
#include <cmath>
#include <ctime>





int main(){
    srand ((int) time(NULL));
    int randomNumber = rand() % 100 + 1;
    std::cout << "Wylosowano liczbe z przedzialu 1-100." << std::endl;

    int guess;
    std::cout << "Masz 10 szans na odgadniecie liczby.\n";
    while (!(std::cin >> guess))
    {
        std::cin.clear();
        std::cin.ignore(100,'\n');
        std::cout << "Podaj liczbe\n";
    }

    int tries = 1;

    while (guess != randomNumber && tries <10) {
        if (guess < randomNumber)
        std::cout << "Liczba jest za mala.";
        else
        std::cout << "Liczba jest za duza.";

    std::cout <<" To byla "<<tries<<" proba. Sprobuj jeszcze raz.\n";
        while (!(std::cin >> guess))
        {
            std::cin.clear();
            std::cin.ignore(100,'\n');
            std::cout << "Podaj liczbe\n";
        }
    tries +=1;



    }
    if(tries < 10)
    std::cout << "Wygrales! Udalo Ci sie zgadnac za "<<tries<<" razem.\n";
    else
    std::cout<<"Wykorzystales wszystkie proby. Poszukiwana liczba bylo "<<randomNumber<<".\n";

return 0;
}