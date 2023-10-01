#ifndef KATUTASO_H
#define KATUTASO_H

#include "asunto.h"
#include <iostream>

class Katutaso {
public:
    Katutaso();
    void maaritaAsunnot();
    double laskeKulutus(double hinta);

private:
    Asunto* as1;
    Asunto* as2;
};

#endif // KATUTASO_H
