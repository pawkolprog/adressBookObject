#include "adressBook.h"

void AdressBook::rejestracjaUzytkownika() {
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void AdressBook::wypiszWszystkichUzytkownikow() {
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void AdressBook::zalogujUzytkownika() {
    if (uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika() == 0){
        uzytkownikMenedzer.logowanieUzytkownika();
        adresatMenedzer.ustawIdZalogowanegoUzytkownika(uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }
}

void AdressBook::dodajAdresata(){
    adresatMenedzer.dodajAdresata();
}

void AdressBook::wyswietlWszystkichAdresatow(){
    adresatMenedzer.wyswietlWszystkichAdresatow();
}

void AdressBook::zmianaHaslaZalogowanegoUzytkownika() {
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void AdressBook::wylogujUzytkownika() {
    if (uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika() != 0){
        uzytkownikMenedzer.wylogujUzytkownika();
        adresatMenedzer.ustawIdZalogowanegoUzytkownika(uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }
}
