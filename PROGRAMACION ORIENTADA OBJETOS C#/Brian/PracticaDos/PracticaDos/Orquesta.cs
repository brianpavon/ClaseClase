using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticaDos
{
  class Orquesta
  {
    public string nombre;
    public string lugar;
    public tipoOrquesta tipo;
    public List<Musico> musicos;//tengo que aclarar con que tipo voy a trabajar en esta lista

    //esto es si quiero asignar un numero a cierto texto
    public enum tipoOrquesta { Sinfonica, Camara, Filarmonica};

    //Contructor sin parametros;

    public Orquesta() { }

    //constructor con parametros:
    public Orquesta(string nombre,string lugar,tipoOrquesta tipo)
    {
      this.nombre = nombre;
      this.lugar = lugar;
      this.tipo = tipo;
      this.musicos = new List<Musico>();
    }

    //funciones:
    public void setNombre(string nombre)
    {
      this.nombre = nombre;
    }

    public string getNombre()
    {
      return this.nombre;
    }

    public string getOrquestaToString()
    {
      StringBuilder sb = new StringBuilder();//esta clase nos va ayudar a manejar textos
      sb.AppendFormat("Nombre Orquesta: {0}, Lugar: {1}, Tipo: {2}\n",this.nombre,this.lugar,this.tipo);//como un printf

      //String.Concat se usa para concatenar

      return sb.ToString();//lo hace string
      
    }

    //metodo estatico:si uso argumentos del metodo, declaro cosas estaticas
    public static void imprimirOrquesta(Orquesta orquesta)
    {
      StringBuilder sb = new StringBuilder();
      sb.AppendLine(orquesta.getOrquestaToString());//al meter la otra funcion ya imprime lo anterior
      //agrego para que imprima la lista de musicos
      if(orquesta.musicos.Count > 0)//con esto veo que la lista tengo algo, valido, count cuenta
      {
        sb.AppendFormat("Lista de Musicos \n");
        //tendria que recorrer la lista para imprimir esta lista de musicos y usamos algo mejor que un for:
        foreach (Musico element in orquesta.musicos)//in significa que esta dentro, y element es asignarle un valor a esa lista
        {
          //con esto accedemos al nombre del elemento y a los atributos y puedo asi porque es publico si no lo fuera
          //se hace con geter
          sb.AppendFormat("Musico: {0}\n", element.nombre);
          sb.AppendFormat("Instrumento: {0}\n", element.instrumento.nombre);
        }
        
      }
      else
      {
        sb.AppendFormat("NO HAY MUSICOS EN ESTA ORQUESTA\n");
      }
      Console.WriteLine("{0}",sb.ToString());//imprimo esa lista y la retorno
      Console.ReadLine();

    }
  }
}
