using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticaUno
{
    class Persona
    {
        private int edad;
        public string nombre;
        public string apellido;

        //contructor si parametro:
        public Persona() { }

        //constructores con parametro:
        public Persona(string nombre, string apellido, int edad)
        {
            this.nombre = nombre;
            this.apellido = apellido;
            this.edad = edad;

        }
        //declaro funciones:
        public void setEdad(int edad)
        {
            this.edad = edad;
        }

        public int getEdad()
        {
            return this.edad;
        }

        public void cumplirAnios()
        {
            this.edad++;
        }

    }
}
