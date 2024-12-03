/**
 *  Registro di attività che memorizza cosa si è fatto durante una giornata.
 *  Classe che rappresenta attività con descrizione, tempo inizio e fine, Classe registro che colleziona attività su base del giorno.
 */
#include <iostream>
#include <chrono>
#include "Activity.h"
#include "Register.h"

using namespace std;

int main() {
    Activity a("test", "2024-12-3");
    Register r(10);
    a.setIdActivity(10);
    a.setDescription("Oggi ho fatto laboratorio di programmazione");
    a.setStartDate("2024-12-03");
    if (r.addActivity(a))
        cout << "Attivita' aggiunta al registro con successo" << endl;
    auto now = std::chrono::system_clock::now(); // Ottieni il tempo corrente
    a.setEndDate(std::chrono::system_clock::to_time_t(now));
    time_t endDate = a.getEndDate();
    cout << "Data di fine: " << std::ctime(&endDate) << endl;
    cout << "Id Attivita: " << a.getIdActivity() << endl;
    cout << "Descrizione: " << a.getDescription() << endl;
    cout << "Data attivita: " << a.getStartDate() << endl;
    return 0;
}
