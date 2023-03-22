#ifndef ADRESSBOOK_H
#define ADRESSBOOK_H

#include <iostream>

#include "uzytkownikMenedzer.h"
#include "adresatMenedzer.h"

using namespace std;

class AdressBook {
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer adresatMenedzer;

public:
    AdressBook(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami);
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void zalogujUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogujUzytkownika();
    void wczytajAdresatowZalogowanegoUzytkownika();

};

#endif
