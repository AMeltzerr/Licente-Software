#ifndef UTILIZATOR_H
#define UTILIZATOR_H

#include <string>
#include <vector>
#include <iostream>
#include "Licenta.h"

class Utilizator {
private:
    std::string nume;
    std::string email;
    std::vector<Licenta*> licenteAlocate;

public:
    // Constructor
    Utilizator(const std::string& nume, const std::string& email)
        : nume(nume), email(email) {}

    // Getteri
    std::string getNume() const { return nume; }
    std::string getEmail() const { return email; }

    // Funcție pentru alocarea unei licențe
    void alocaLicenta(Licenta* licenta) {
        if (licenta->getEsteActiva()) {
            std::cout << "Licenta este deja activa.\n";
        }
        else {
            licenteAlocate.push_back(licenta);
            licenta->activeazaLicenta();
            std::cout << "Licenta " << licenta->getCodLicenta() << " a fost alocata utilizatorului " << nume << ".\n";
        }
    }

    // Funcție pentru revocarea unei licențe
    void revocaLicenta(const std::string& codLicenta) {
        for (auto it = licenteAlocate.begin(); it != licenteAlocate.end(); ++it) {
            if ((*it)->getCodLicenta() == codLicenta) {
                (*it)->dezactiveazaLicenta();
                licenteAlocate.erase(it);
                std::cout << "Licenta " << codLicenta << " a fost revocata de la utilizatorul " << nume << ".\n";
                return;
            }
        }
        std::cout << "Licenta " << codLicenta << " nu a fost gasita la utilizatorul " << nume << ".\n";
    }

    // Funcție pentru listarea licențelor utilizatorului
    void listLicente() const {
        std::cout << "Licente pentru utilizatorul " << nume << ":\n";
        for (const auto& licenta : licenteAlocate) {
            std::cout << *licenta << '\n';
        }
    }
};

#endif // UTILIZATOR_H

