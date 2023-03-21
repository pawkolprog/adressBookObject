#ifndef ADRESSBOOK_H
#define ADRESSBOOK_H

#include <iostream>

#include "uzytkownikMenedzer.h"

using namespace std;

class AdressBook {
    UzytkownikMenedzer uzytkownikMenedzer;

public:
    AdressBook(string nazwaPlikuZUzytkownikami);
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();

};

#endif
