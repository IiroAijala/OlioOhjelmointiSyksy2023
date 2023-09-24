#include "kerros.h"
# include <iostream>

Kerros::Kerros() {
    std::cout << "Kerros luotu" << std::endl;
}

void Kerros::maaritaAsunnot() {
    std::cout << "Maaritetaan 4 kpl kerroksen asuntoja" << std::endl;
    Asunto asunto1;
    Asunto asunto2;
    Asunto asunto3;
    Asunto asunto4;

    asunto1.maarita(2, 100);
    asunto2.maarita(2, 100);
    asunto3.maarita(2, 100);
    asunto4.maarita(2, 100);
}

double Kerros::laskeKulutus(double hinta) {
    double kulutus1 = as1.laskeKulutus(hinta);
    double kulutus2 = as2.laskeKulutus(hinta);
    double kulutus3 = as3.laskeKulutus(hinta);
    double kulutus4 = as4.laskeKulutus(hinta);
    return kulutus1 + kulutus2 + kulutus3 + kulutus4;
}

