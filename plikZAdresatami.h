#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>

#include "adresaci.h"
#include "metodyPomocnicze.h"

class PlikZAdresatami {
    const string nazwaPlikuZAdresatami;

    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    bool czyPlikJestPusty(fstream &plikTekstowy);

public:
    PlikZAdresatami(string nazwaPliku);
    void dopiszAdresataDoPliku(Adresat adresat);
};






#endif
