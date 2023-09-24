#include <iostream>
#include "kerrostalo.h"

int main() {
    Asunto asunto1;
    Asunto asunto2;
    Asunto asunto3;
    Asunto asunto4;

    Katutaso katutaso;
    katutaso.maaritaAsunnot();

    Kerros kerros;
    kerros.maaritaAsunnot();

    double kulutusKatutaso = katutaso.laskeKulutus(1.0);
    double kulutusKerros = kerros.laskeKulutus(1.0);

    std::cout << "Katutason ja perityn kerroksen kulutus, kun hinta = 1 on " << kulutusKatutaso + kulutusKerros << std::endl;

    Kerrostalo kerrostalo;

    return 0;
}
