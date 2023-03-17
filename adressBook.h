#include <iostream>
#include <vector>

#include "users.h"

using namespace std;

class AdressBook {
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;

    vector <User> uzytkownicy;

public:
    void rejestracjaUzytkownika();
};
