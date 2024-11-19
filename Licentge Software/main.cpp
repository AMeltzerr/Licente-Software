#include <iostream>
#include "Licenta.h"
#include "Utilizator.h"
#include "SistemGestionareLicente.h"

int main() {
    SistemGestionareLicente sistem;

    // Adaugare licente
    sistem.adaugaLicenta(Licenta("ABC123", "Office 365"));
    sistem.adaugaLicenta(Licenta("DEF456", "Office 2021"));

    // Adaugare utilizatori
    sistem.adaugaUtilizator(Utilizator("Ion Popescu", "ion.popescu@example.com"));
    sistem.adaugaUtilizator(Utilizator("Maria Ionescu", "maria.ionescu@example.com"));

    // Alocare licențe
    sistem.alocaLicenta("ion.popescu@example.com", "ABC123");
    sistem.alocaLicenta("maria.ionescu@example.com", "DEF456");

    // Monitorizare
    sistem.monitorizeazaLicente();

    // Revocare licență
    sistem.alocaLicenta("ion.popescu@example.com", "DEF456");
    sistem.monitorizeazaLicente();

    return 0;
}
