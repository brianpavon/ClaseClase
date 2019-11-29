using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticaDos
{
  class Musico
  {
    public string nombre;
    public string apellido;
    public int edad;
    public Instrumento instrumento;
    //public Orquesta orquesta;

    //constructor pero si o si con paramentros:
    public Musico(string nombre,
                  string apellido,
                  int edad,
                  Instrumento ints)
                  //Orquesta or)
    {
      this.nombre = nombre;
      this.apellido = apellido;
      this.edad = edad;
      this.instrumento = ints;
      //this.orquesta = or;

    }
  }
}
