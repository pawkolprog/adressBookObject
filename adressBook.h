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
    AdressBook(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), adresatMenedzer(nazwaPlikuZAdresatami) {
    uzytkownikMenedzer.wczytajUzytkownikow();
    }
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void zalogujUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogujUzytkownika();

};

#endif
