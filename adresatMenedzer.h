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
    PlikZAdresatami plikZAdresatami;

    void wyswietlDaneAdresata(Adresat adresat);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami);
    void wyswietlWszystkichAdresatow();
    void dodajAdresata(int idZalogowanegoUzytkownika);

};

#endif
