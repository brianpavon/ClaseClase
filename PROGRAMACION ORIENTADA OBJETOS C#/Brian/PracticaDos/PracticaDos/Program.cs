using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticaDos
{
  class Program
  {
    static void Main(string[] args)
    {
      Orquesta orquestaUno = new Orquesta("La Uno","Avellaneda",Orquesta.tipoOrquesta.Sinfonica);
      Instrumento instrumentoUno = new Instrumento("Guitarra", Instrumento.tipoInstrumento.Cuerda);
      Console.WriteLine("Nombre: {0}, Lugar: {1}, Tipo: {2}\n Instrumento: {3} Tipo: {4}", orquestaUno.getNombre(), orquestaUno.lugar, orquestaUno.tipo,instrumentoUno.nombre,instrumentoUno.tipo);
      Console.ReadLine();

      //para crear musico si o si necesitamos antes orquesta e instrumento:
      Musico musicoUno = new Musico("Carla", "Perez", 30, instrumentoUno);//,orquestaUno);
      Console.WriteLine("Nombre del musico: {0}, Apellido: {1}, Edad: {2},\nInstrumento:\n {3}",
                                                         musicoUno.nombre, musicoUno.apellido,
                                                         musicoUno.edad, musicoUno.instrumento.getInstrumentoToString());
                                                         
      Console.ReadLine();

      Musico musicoDos = new Musico("Pepe","Grillo",24,instrumentoUno);

      orquestaUno.musicos.Add(musicoUno);//agregamos este elemento a la lista de los musicos de la orquesta
      orquestaUno.musicos.Add(musicoDos);

      Orquesta.imprimirOrquesta(orquestaUno);

      Orquesta orquestaDos = new Orquesta("Segunda","Quilmes",Orquesta.tipoOrquesta.Filarmonica);
      Orquesta.imprimirOrquesta(orquestaDos);
    }
  }
}
