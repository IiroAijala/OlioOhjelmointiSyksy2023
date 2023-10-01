#include "katutaso.h"
#include <iostream>

Katutaso::Katutaso() {
    std::cout << "Katutaso luotu" << std::endl;
    as1 = nullptr;
    as2 = nullptr;
}

void Katutaso::maaritaAsunnot() {
    std::cout << "Maaritetaan 2 kpl katutason asuntoja" << std::endl;

    // Luo ja määritä kaksi asuntoa dynaamisesti
    as1 = new Asunto;
    as2 = new Asunto;

    // Määritä asuntojen tiedot
    as1->maarita(2, 100);
    as2->maarita(2, 100);
}

double Katutaso::laskeKulutus(double hinta) {
    double kulutus = 0.0;
    if (as1 != nullptr) {
        kulutus += as1->laskeKulutus(hinta);
    }
    if (as2 != nullptr) {
        kulutus += as2->laskeKulutus(hinta);
    }
    return kulutus;
}
