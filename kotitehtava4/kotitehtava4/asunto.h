#ifndef ASUNTO_H
#define ASUNTO_H

class Asunto {
public:
    Asunto(); // Luokan konstruktorin määrittely
    void maarita(int asukkaat, int pintaAla);
    double laskeKulutus(double hinta);

private:
    int asukasMaara;
    int neliot;
};

#endif // ASUNTO_H
