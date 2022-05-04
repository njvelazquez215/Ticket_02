//
// Created by Nicolas Velazquez on 20/04/2022.
//

#ifndef TICKET_02_TICKET_H

    #define TICKET_02_TICKET_H

    #include <iostream>
    #include "Fecha.h"

    using namespace std;

    class Ticket
    {
        public:
            //Constructor
            Ticket();
            Ticket(string);

            //Destructor
            ~Ticket();

            //Asignar Atributos
            void AsignarDatos(string);

            //Obtener Atributo
            string ObtenesNro();
            string ObtenerDatos();
            Fecha ObtenerFecha();

            //Servicio
            void MostrarDatos();

        private:
            string datos;
            string nro;
            Fecha fecha;

            //Servicio
            void ParsearDatos();

        protected:

    };

#endif //TICKET_02_TICKET_H
