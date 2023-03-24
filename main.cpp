#include <iostream>

#include "adressBook.h"

using namespace std;

int main()
{
    AdressBook ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.zalogujUzytkownika();
    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdresowa.wylogujUzytkownika();
    //ksiazkaAdresowa.zalogujUzytkownika();
    ksiazkaAdresowa.wczytajAdresatowZalogowanegoUzytkownika();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

    return 0;
}
