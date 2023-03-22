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

void AdressBook::zalogujUzytkownika() {
    uzytkownikMenedzer.logowanieUzytkownika();
    cout << endl << "Udalo sie zalogowac, Twoje ID: " << uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}

void AdressBook::dodajAdresata(){
    adresatMenedzer.dodajAdresata(uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
}

void AdressBook::wyswietlWszystkichAdresatow(){
    adresatMenedzer.wyswietlWszystkichAdresatow();
}
