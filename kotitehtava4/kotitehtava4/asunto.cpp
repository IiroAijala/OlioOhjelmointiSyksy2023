#include "asunto.h"
# include <iostream>

Asunto::Asunto() {
    asukasMaara = 2;
    neliot = 100;
    std::cout << "asunto luotu" << std::endl;
}


void Asunto::maarita(int asukkaat, int pintaAla) {
    asukasMaara = asukkaat;
    neliot = pintaAla;
    std::cout << "Asunto maaritetty asukkaita= " << asukasMaara << " nelioita= " << neliot << std::endl;
}


double Asunto::laskeKulutus(double hinta) {
    double kulutus = asukasMaara * neliot * hinta;
    std::cout << "asunnon kulutus, kun hinta=" << hinta << " on " << kulutus << std::endl;
    return kulutus;
}
