#include "KsiazkaAdresowa.h"


void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikManager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikManager.wypiszWszystkichUzytkownikow();
}
void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikManager.logowanieUzytkownika();
    if(uzytkownikManager.czyUzytkownikJestZalogowany())
    {
        adresatManager= new AdresatManager(NAZWA_PLIKU_Z_ADRESATAMI,uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
    }

}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikManager.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikManager.wylogowanieUzytkownika();
    delete adresatManager;
    adresatManager = NULL;
}
void KsiazkaAdresowa::dodajAdresata()
{

    if (uzytkownikManager.czyUzytkownikJestZalogowany())
    {
        adresatManager->dodajAdresata();
    }
    else
    {
        cout << "Aby dodac adresata, nalezy najpierw sie zalogowac" << endl;
        system ("pause");
    }
}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    if (uzytkownikManager.czyUzytkownikJestZalogowany())
    {
        adresatManager->wyswietlWszystkichAdresatow();
    }
}

void KsiazkaAdresowa::wczytajAdresatowZPliku()
{
    adresatManager->wczytajAdresatowZPliku(uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    return uzytkownikManager.czyUzytkownikJestZalogowany();
}
void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    adresatManager->wyszukajAdresatowPoImieniu();
}
void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
    adresatManager->wyszukajAdresatowPoNazwisku();
}
int KsiazkaAdresowa::usunAdresata()
{
    adresatManager->usunAdresata();

}
void KsiazkaAdresowa::edytujAdresata()
{
    adresatManager->edytujAdresata();
}
