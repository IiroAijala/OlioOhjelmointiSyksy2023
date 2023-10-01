#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "katutaso.h"
#include "kerros.h"

class Kerrostalo {
public:
    Kerrostalo();
    ~Kerrostalo(); // Purkaja lisätty dynaamisen muistin vapauttamiseksi
    void maaritellaKaikkiAsunnot();
    double laskeKulutus(double hinta);

private:
    Katutaso* eka;   // Käytetään osoittimia olioihin
    Kerros* toka;    // Käytetään osoittimia olioihin
    Kerros* kolmas;  // Käytetään osoittimia olioihin
};

#endif // KERROSTALO_H
