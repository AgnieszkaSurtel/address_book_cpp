#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "MetodyPomocnicze.h"
#include "Adresat.h"
#include "PlikTekstowy.h"


class PlikZAdresatami :public PlikTekstowy
{
    string NAZWA_PLIKU_Z_ADRESATAMI;
    int idOstatniegoAdresata;
    string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI);
    bool dopiszAdresataDoPliku(Adresat adresat);
    vector<Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    int pobierzIdOstatniegoAdresata();
    void wczytajIdOstatniegoAdresata(int Id);
    void usunAdresataZPliku(int idAdresata);
    void edytujAdresataWPliku(Adresat adresat);

};

#endif
