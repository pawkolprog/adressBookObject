#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>

#include "adresaci.h"
#include "plikZAdresatami.h"
#include "metodyPomocnicze.h"

class AdresatMenedzer {
    vector <Adresat> adresaci;
    int idOstatniegoAdresata;

    void wyswietlDaneAdresata(Adresat adresat);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);

public:
    AdresatMenedzer();
    void wyswietlWszystkichAdresatow();
    void dodajAdresata(int idZalogowanegoUzytkownika);

};

#endif
