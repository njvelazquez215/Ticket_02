//
// Created by Nicolas Velazquez on 20/04/2022.
//

#include "Ticket.h"
#include "Fecha.h"
#include <iostream>
using namespace std;

//Constructor
Ticket::Ticket()
{}

Ticket::Ticket(string datos)
{
    this->datos = datos;
    this->nro = datos;
    //this->fecha = datos; //fijarse si esto va o no
    ParsearDatos();
}

//Destructor
Ticket::~Ticket()
{}


void Ticket::AsignarDatos(string datos)
{
    this->datos = datos;
    this->nro = datos;
    //this ->fecha = datos;
}

void Ticket::MostrarDatos()
{
    cout << "Datos: " << this->ObtenerDatos() << endl << flush;
    cout << "Nro: " << this->ObtenesNro() << endl << flush;
    fecha.MostrarFecha();
}

string Ticket::ObtenesNro()
{
    return this->nro;
}

string Ticket::ObtenerDatos()
{
    return this->datos;
}

Fecha Ticket::ObtenerFecha()
{
    return this->fecha;
}

void Ticket::ParsearDatos()
{
// variables auxiliares
    string informacion;
    if (datos.length() < 10)
    {
        for (int i = 0; i < datos.length(); i++)
        {
            informacion += datos[i];
        }
        nro = informacion;
        informacion = "";
    }

    if (datos.length() >= 10)
    {
        for (int i = 0; i < 10; i++)
        {
            informacion += datos[i];
        }
        nro = informacion;
        informacion = "";
    }

    if (datos.length() > 10 && datos.length() <= 16) {
        for (int i = 10; i < datos.length(); i++) {

            if (i >= 10 && i < 12) {
                informacion += datos[i];
            }
            if (i == 11) {
                fecha.AsignarDD(stoi(informacion));
                informacion = "";
            }
            if (i >= 12 && i < 14) {
                informacion += datos[i];
            }
            if (i == 13) {
                fecha.AsignarMM(stoi(informacion));
                informacion = "";
            }
            if (i >= 14 && i < 16) {
                informacion += datos[i];
            }
            if (i == 15) {
                fecha.AsignarAAAA(stoi(informacion));
                informacion = "";
            }
        }
    }
}

