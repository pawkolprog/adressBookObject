#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H


#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>

#include "users.h"
#include "metodyPomocnicze.h"

using namespace std;

class PlikZUzytkownikami {
    string nazwaPlikuZUzytkownikami;
    fstream plikTekstowy;

    bool czyPlikJestPusty();
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);

public:
    PlikZUzytkownikami();
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
};

#endif
