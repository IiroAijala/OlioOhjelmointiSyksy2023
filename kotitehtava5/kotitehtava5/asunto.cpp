#include "asunto.h"
#include <iostream>

Asunto::Asunto() {
    std::cout << "Asunto luotu" << std::endl;
    asukasMaara = 0;
    neliot = 0;
}

Asunto::~Asunto() {
    std::cout << "Asunto poistettu" << std::endl;
}

void Asunto::maarita(int asukasMaara, int neliot) {
    std::cout << "Asunto maaritetty asukkaita= " << asukasMaara << " nelioita= " << neliot << std::endl;
    this->asukasMaara = asukasMaara;
    this->neliot = neliot;
}

double Asunto::laskeKulutus(double hinta) {
    double kulutus = asukasMaara * neliot * hinta;
    std::cout << "Asunnon kulutus, kun hinta=" << hinta << " on " << kulutus << std::endl;
    return kulutus;
}
