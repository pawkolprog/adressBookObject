#include <iostream>

#include "adressBook.h"

using namespace std;

int main()
{
    AdressBook ksiazkaadresowa;
    ksiazkaadresowa.wypiszWszystkichUzytkownikow();
    ksiazkaadresowa.rejestracjaUzytkownika();
    ksiazkaadresowa.wypiszWszystkichUzytkownikow();

    return 0;
}
