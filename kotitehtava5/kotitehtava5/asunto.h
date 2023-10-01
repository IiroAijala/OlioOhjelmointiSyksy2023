#ifndef ASUNTO_H
#define ASUNTO_H

class Asunto {
public:
    Asunto();
    ~Asunto(); // Purkaja lisätty dynaamisen muistin vapauttamiseksi
    void maarita(int asukasMaara, int neliot);
    double laskeKulutus(double hinta);

private:
    int asukasMaara;
    int neliot;
};

#endif // ASUNTO_H
