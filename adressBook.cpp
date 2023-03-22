#include "adressBook.h"

AdressBook::AdressBook(string nazwaPlikuZUzytkownikami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami) {
    uzytkownikMenedzer.wczytajUzytkownikow();
}

void AdressBook::rejestracjaUzytkownika() {
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void AdressBook::wypiszWszystkichUzytkownikow() {
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void AdressBook::zaloguj() {
    uzytkownikMenedzer.logowanieUzytkownika();
    cout << endl << uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}
