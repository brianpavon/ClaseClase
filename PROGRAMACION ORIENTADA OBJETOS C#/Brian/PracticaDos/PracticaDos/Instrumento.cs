using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticaDos
{
  class Instrumento
  {
    public string nombre;
    public tipoInstrumento tipo;
  

    public enum tipoInstrumento {Cuerda,Viento};

    public Instrumento() { }

    public Instrumento(string nombre, tipoInstrumento tipo)
    {
      this.nombre = nombre;
      this.tipo = tipo;
    }

    public string getInstrumentoToString()
    {
      StringBuilder sb = new StringBuilder();
      sb.AppendFormat("Nombre: {0} Tipo: {1}",this.nombre,this.tipo);

      return sb.ToString();      
    }
  }
}
