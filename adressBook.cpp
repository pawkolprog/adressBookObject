#include "adressBook.h"

AdressBook::AdressBook() {
    uzytkownikMenedzer.wczytajUzytkownikow();
}

void AdressBook::rejestracjaUzytkownika() {
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void AdressBook::wypiszWszystkichUzytkownikow() {
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}
