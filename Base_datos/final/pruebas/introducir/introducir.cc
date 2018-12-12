#include <stdio>
#include <char>
#include <stdlib>
#include <fstream>
#include "alumno.h"

using namespace std;

void introducir()
{
  Alumno A;
  int grupo,curso;
char dni[256],email[256], nombre[256], apellido[256], telefono[256], direccion[256], fecha[256];
  bool lider,tiempo;  //Tiempo parcial o no
  char cad [100];
//Debajo se abre el fichero en modo salida para escribir los datos del alumno.
  ofstream fsalida("Agenda.dat",ios::out|ios::binary);

  cout<<"Introduce el DNI"<<endl;
  a.setDNI(dni);//Esta funcion es como un cin que escribe el valor que queremos, mientras que la de abajo lo guarda en la variable
  a.getDNI;
  fsalida.write(dni, sizeof(dni);//Aqui escribimos el valor de dni en el fichero

//Todas las funciones de abajo son copias exactas de las superiores pero cambiando las variables

  cout<<"Introduce el nombre"<<endl;
  a.setNombre(nombre);
  a.getNombre;
  fsalida.write(nombre, sizeof(nombre));

  cout<<"Introduce el apellido"<<endl;
  a.setApellido(apellido);
  a.getApellido;
  fsalida.write(apellido, sizeof(apellido));

  cout<<"Introduce el email"<<endl;
  a.setEmail(email);
  a.getEmail;
  fsalida.write(email, sizeof(email));

  cout<<"Introduce el telefono"<<endl;
  a.setTelefono(telefono);
  a.getTelefono;
  fsalida.write(telefono, sizeof(telefono));

  cout<<"Introduce el email"<<endl;
  a.setDireccion(direccion);
  a.getDireccion;
  fsalida.write(direccion, sizeof(direccion));

  cout<<"Introduce la fecha de nacimiento"<<endl;
  a.setNacimiento(fecha);
  a.getNacimiento;
  fsalida.write(fecha, sizeof(fecha));

  cout<<"Introduce el apellido"<<endl;
  a.setApellido(apellido);
  a.getApellido;
  fsalida.write(apellido, sizeof(apellido));

  cout<<"Introduce el curso mas alto"<<endl;
  a.setCurso(curso);
  a.getCurso;
  fsalida.write(curso, sizeof(int));

  cout<<"Introduce el grupo"<<endl;
  a.setGrupo(grupo);
  a.getGrupo;
  fsalida.write(grupo, sizeof(int));

  cout<<"Introduce si es lider"<<endl;
  a.setLiderazgo(lider);
  a.getLiderazgo;
  fsalida.write(lider, sizeof(int));

  cout<<"Introduce si es a tiempo parcial"<<endl;
  a.setParcialidad(tiempo);
  a.getParcialidad;
  fsalida.write(tiempo, sizeof(int));

  fsalida.close();

  ifstream fentrada("Agenda.dat",ios::in|ios::binary);

  do {
      cout << cad << endl;
      fentrada.read(cad, 100);
   } while(!fentrada.eof());

}
