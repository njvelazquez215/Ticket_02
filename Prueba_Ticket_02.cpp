#include <iostream>
#include<iomanip>
#include "Ticket.h"

using namespace std;

int main(int, char**) {

    Ticket ticketUno("835629364412042022"); //tiene fecha agregada.. hacer el parcer y atoi
    Ticket ticketDos("739264422807052022"); //fecha 07/05/2022
    Ticket ticketTres;

    ticketTres.AsignarDatos("398234672323062022"); //fecha 23/06/2022

    cout << endl << "Datos de Ticket Uno" << endl << flush;
    ticketUno.MostrarDatos();
    cout << endl << "Datos de Ticket Dos" << endl << flush;
    ticketDos.MostrarDatos();
    cout << endl << "Datos de Ticket Tres" << endl << flush;
    ticketTres.MostrarDatos();

    return 0;
}
