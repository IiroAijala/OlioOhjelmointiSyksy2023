#include <iostream>
#include "kerrostalo.h"

int main() {
    Kerrostalo* kerrostalo = new Kerrostalo; // Varataan Kerrostalo heapista

    kerrostalo->maaritellaKaikkiAsunnot();
    double kulutusKerrostalo = kerrostalo->laskeKulutus(1.0);

    delete kerrostalo; // Vapautetaan Kerrostalo-olio heapista

    return 0;
}
