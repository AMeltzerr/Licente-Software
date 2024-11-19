#ifndef SISTEM_GESTIONARE_LICENTE_H
#define SISTEM_GESTIONARE_LICENTE_H

#include <vector>
#include "Licenta.h"
#include "Utilizator.h"

class SistemGestionareLicente {
private:
    std::vector<Licenta> licenteDisponibile;
    std::vector<Utilizator> utilizatori;

public:
    // Adaugare licenta in sistem
    void adaugaLicenta(const Licenta& licenta) {
        licenteDisponibile.push_back(licenta);
    }

    // Adaugare utilizator in sistem
    void adaugaUtilizator(const Utilizator& utilizator) {
        utilizatori.push_back(utilizator);
    }

    // Alocare licență unui utilizator
    void alocaLicenta(const std::string& email, const std::string& codLicenta) {
        for (auto& licenta : licenteDisponibile) {
            if (licenta.getCodLicenta() == codLicenta && !licenta.getEsteActiva()) {
                for (auto& utilizator : utilizatori) {
                    if (utilizator.getEmail() == email) {
                        utilizator.alocaLicenta(&licenta);
                        return;
                    }
                }
                std::cout << "Utilizatorul cu emailul " << email << " nu a fost gasit.\n";
                return;
            }
        }
        std::cout << "Licenta cu codul " << codLicenta << " nu este disponibila.\n";
    }

    // Monitorizare licențe
    void monitorizeazaLicente() const {
        std::cout << "Stare licente:\n";
        for (const auto& licenta : licenteDisponibile) {
            std::cout << licenta << '\n';
        }
    }

    // Listare utilizatori
    void listUtilizatori() const {
        std::cout << "Lista utilizatorilor:\n";
        for (const auto& utilizator : utilizatori) {
            std::cout << "Nume: " << utilizator.getNume() << ", Email: " << utilizator.getEmail() << '\n';
        }
    }
};

#endif // SISTEM_GESTIONARE_LICENTE_H

