#ifndef UZYTKOWNIKMENEDZER_H
#define UZYTKOWNIKMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "users.h"
#include "plikZUzytkownikami.h"
#include "metodyPomocnicze.h"

using namespace std;

class UzytkownikMenedzer {
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;
    PlikZUzytkownikami plikZUzytkownikami;

    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);


public:
    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami) {
    idZalogowanegoUzytkownika = 0;
    wczytajUzytkownikow();
}
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    Uzytkownik podajDaneNowegoUzytkownika();
    void wczytajUzytkownikow();
    bool logowanieUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogujUzytkownika();

};

#endif
