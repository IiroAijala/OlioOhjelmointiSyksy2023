#include "kerrostalo.h"
#include <iostream>

Kerrostalo::Kerrostalo() {
    std::cout << "Kerrostalo luotu" << std::endl;
}

double Kerrostalo::laskeKulutus(double hinta) {
    double kulutus = eka.laskeKulutus(hinta) + toka.laskeKulutus(hinta) + kolmas.laskeKulutus(hinta);
    std::cout << "Kerrostalon kulutus, = " << kulutus << std::endl;

    return kulutus;
}
