#include "kerrostalo.h"

Kerrostalo::Kerrostalo() {
    std::cout << "Kerrostalo luotu" << std::endl;
    eka = nullptr;
    toka = nullptr;
    kolmas = nullptr;
}

Kerrostalo::~Kerrostalo() {
    delete eka;   // Vapautetaan Katutaso-olio heapista
    delete toka;  // Vapautetaan Kerros-olio heapista
    delete kolmas; // Vapautetaan Kerros-olio heapista
}

void Kerrostalo::maaritellaKaikkiAsunnot() {
    std::cout << "Maaritellaan koko kerrostalon kaikki asunnot" << std::endl;

    // Luo ja määritä Katutaso- ja Kerros-oliot dynaamisesti
    eka = new Katutaso;
    toka = new Kerros;
    kolmas = new Kerros;

    // Määritä asunnot kullekin tasolle
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double hinta) {
    double kulutus = 0.0;
    if (eka != nullptr) {
        kulutus += eka->laskeKulutus(hinta);
    }
    if (toka != nullptr) {
        kulutus += toka->laskeKulutus(hinta);
    }
    if (kolmas != nullptr) {
        kulutus += kolmas->laskeKulutus(hinta);
    }
    return kulutus;
}
