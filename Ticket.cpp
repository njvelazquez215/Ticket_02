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
    this->fecha = datos; //fijarse si esto va o no
}

//Destructor
Ticket::~Ticket()
{}


void Ticket::AsignarDatos(string datos)
{
    this->datos = datos;
    this->nro = datos;
    this ->fecha = datos;
}

void Ticket::MostrarDatos()
{
    cout << "Datos: " << this->ObtenerDatos() << endl << flush;
    cout << "Nro: " << this->ObtenesNro() << endl << flush;
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

