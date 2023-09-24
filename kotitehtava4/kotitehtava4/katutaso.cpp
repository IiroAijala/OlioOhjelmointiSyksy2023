#include "katutaso.h"
#include <iostream>

Katutaso::Katutaso() {
    std::cout << "Katutaso luotu" << std::endl;
}

void Katutaso::maaritaAsunnot() {
    std::cout << "Maaritetaan 2 kpl katutason asuntoja" << std::endl;
    Asunto asunto1;
    Asunto asunto2;
    asunto1.maarita(2, 100);
    asunto2.maarita(2, 100);
}

double Katutaso::laskeKulutus(double hinta) {
    double kulutus1 = as1.laskeKulutus(hinta);
    double kulutus2 = as2.laskeKulutus(hinta);
    return kulutus1 + kulutus2;
}
