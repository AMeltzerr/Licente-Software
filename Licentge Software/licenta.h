#ifndef LICENTA_H
#define LICENTA_H

#include <string>
#include <iostream>

class Licenta {
private:
    std::string codLicenta;
    std::string tipLicenta; // Ex: "Office 365", "Office 2021", etc.
    bool esteActiva;

public:
    // Constructor
    Licenta(const std::string& cod, const std::string& tip)
        : codLicenta(cod), tipLicenta(tip), esteActiva(false) {}

    // Getteri
    std::string getCodLicenta() const { return codLicenta; }
    std::string getTipLicenta() const { return tipLicenta; }
    bool getEsteActiva() const { return esteActiva; }

    // Funcții de activare/dezactivare
    void activeazaLicenta() { esteActiva = true; }
    void dezactiveazaLicenta() { esteActiva = false; }

    // Supraincarcare operator <<
    friend std::ostream& operator<<(std::ostream& os, const Licenta& licenta) {
        os << "Cod Licenta: " << licenta.codLicenta
            << ", Tip: " << licenta.tipLicenta
            << ", Activa: " << (licenta.esteActiva ? "Da" : "Nu");
        return os;
    }
};

#endif // LICENTA_H
