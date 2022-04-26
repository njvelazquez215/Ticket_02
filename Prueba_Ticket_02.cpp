#include <iostream>
#include<iomanip>
#include "Ticket.h"

using namespace std;

int main() {

    Ticket ticketUno("835629364412042022"); //tiene fecha agregada.. hacer el parcer y atoi
    Ticket ticketDos("7392644228"); //fecha 07052022
    Ticket ticketTres;

    ticketTres.AsignarDatos("3982346723"); //fecha 23062022

    cout << endl << "Datos de Ticket Uno" << endl << flush;
    ticketUno.MostrarDatos();
    ticketUno.ObtenerFecha().MostrarFecha();
    cout << endl << "Datos de Ticket Dos" << endl << flush;
    ticketDos.MostrarDatos();
    cout << endl << "Datos de Ticket Tres" << endl << flush;
    ticketTres.MostrarDatos();

    return 0;
}
