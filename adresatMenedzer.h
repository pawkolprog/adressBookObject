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
    int idZalogowanegoUzytkownika;
    PlikZAdresatami plikZAdresatami;

    void wyswietlDaneAdresata(Adresat adresat);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {
    idZalogowanegoUzytkownika = 0;
}
    void wyswietlWszystkichAdresatow();
    void dodajAdresata();
    void ustawIdZalogowanegoUzytkownika(int id);

};

#endif
