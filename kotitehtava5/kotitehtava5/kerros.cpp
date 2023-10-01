#include "kerros.h"
#include <iostream>

Kerros::Kerros() {
    std::cout << "Kerros luotu" << std::endl;
    as1 = nullptr;
    as2 = nullptr;
    as3 = nullptr;
    as4 = nullptr;
}

void Kerros::maaritaAsunnot() {
    std::cout << "Maaritetaan 4 kpl kerroksen asuntoja" << std::endl;

    // Luo ja määritä neljä asuntoa dynaamisesti
    as1 = new Asunto;
    as2 = new Asunto;
    as3 = new Asunto;
    as4 = new Asunto;

    // Määritä asuntojen tiedot
    as1->maarita(2, 100);
    as2->maarita(2, 100);
    as3->maarita(2, 100);
    as4->maarita(2, 100);
}

double Kerros::laskeKulutus(double hinta) {
    double kulutus = 0.0;
    if (as1 != nullptr) {
        kulutus += as1->laskeKulutus(hinta);
    }
    if (as2 != nullptr) {
        kulutus += as2->laskeKulutus(hinta);
    }
    if (as3 != nullptr) {
        kulutus += as3->laskeKulutus(hinta);
    }
    if (as4 != nullptr) {
        kulutus += as4->laskeKulutus(hinta);
    }
    return kulutus;
}
