#include "adressBook.h"

AdressBook::AdressBook(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), adresatMenedzer(nazwaPlikuZAdresatami) {
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

void AdressBook::zmianaHaslaZalogowanegoUzytkownika() {
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void AdressBook::wylogujUzytkownika() {
    uzytkownikMenedzer.wylogujUzytkownika();
}
