#include <iostream>

#include "adressBook.h"

using namespace std;

int main()
{
    AdressBook ksiazkaadresowa("Uzytkownicy.txt");
    ksiazkaadresowa.wypiszWszystkichUzytkownikow();
    ksiazkaadresowa.rejestracjaUzytkownika();
    ksiazkaadresowa.wypiszWszystkichUzytkownikow();

    return 0;
}
