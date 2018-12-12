//main.cc

#include <string>
#include <iostream>
#include "alumno.h"
#include "agenda.h"
using namespace std;

int main(){

  string DNI,nombre,apellidos,email,direccion,nacimiento;
  int telefono,grupo,liderazgo,parcialidad,curso,menu;

  Alumno alum(DNI, nombre, apellidos, email, direccion, nacimiento, telefono, grupo, liderazgo, parcialidad, curso);
  Agenda agen;

    do{

      //variables auxiliares
      string dnia="", nombrea="", apellidosa="", emaila="", direcciona="", nacimientoa="";
      int telefonoa=0, grupoa=0, liderazgoa=0, parcialidada=2, cursoa=0;

      //opciones del menu
      cout<<endl;
      cout<<"Bienvenido/a."<<endl;
      cout<<"Introduzca una opción:"<<endl;
      cout<<"1: Introducir alumno."<<endl;
      cout<<"2: Mostrar alumno."<<endl;
      cout<<"3: Mostrar listado de alumnos."<<endl;
      cout<<"4: Modificar alumno."<<endl;
      cout<<"5: Borrar alumno."<<endl;
      cout<<"6: Buscar alumno."<<endl;
      cout<<"7: Entrar en modo coordinador."<<endl;
      cout<<"8: Salir."<<endl;

      cin>>menu;

      switch(menu){

      case 1:

        cout<<"Introduzca DNI"<<endl; //set dni
        getline(cin, dnia); //este getline introduce "" al dni por lo que se utiliza un segundo getline
        getline(cin, dnia);
        if(dnia.empty()){
          cout<<"Error, campo obligatorio."<<endl;
          break;
        }else{
          alum.setDNI(dnia);
        }

        cout<<"Introduzca nombre."<<endl; //set nombre
        getline(cin, nombrea);
        if (nombrea.empty()){
          cout<<"Error, campo obligatorio."<<endl;
          break;
        }else{
          alum.setNombre(nombrea);
        }

        cout<<"Introduzca apellidos. Nota: separe los apellidos mediante una barra baja -> _."<<endl; //set apellidos
        getline(cin, apellidosa);
        if (apellidosa.empty()){
          cout<<"Error, campo obligatorio."<<endl;
          break;
        }else{
          alum.setApellidos(apellidosa);
        }

        cout<<"Introduzca email."<<endl; // set email
        getline(cin, emaila);
        if (emaila.empty()){
          cout<<"Error, campo obligatorio."<<endl;
          break;
        }else{
          alum.setEmail(emaila);
        }

        cout<<"Introduzca direccion."<<endl; // set direccion
        getline(cin, direcciona);
        if (direcciona.empty()){
          cout<<"Error, campo obligatorio."<<endl;
          break;
        }else{
          alum.setDireccion(direcciona);
        }

        cout<<"Introduzca fecha de nacimiento."<<endl; //set nacimiento
        getline(cin, nacimientoa);
        if (nacimientoa.empty()){
          cout<<"Error, campo obligatorio."<<endl;
          break;
        }else{
          alum.setNacimiento(nacimientoa);
        }

        cout<<"Introduzca telefono."<<endl; //set telefono
        cin>>telefonoa;
        if (telefonoa==0){
          cout<<"Error, campo obligatorio."<<endl;
          break;
        }else{
          alum.setTelefono(telefonoa);
        }

        cout<<"Introduzca grupo. Introducir 0 significa alumno sin grupo."<<endl; //set grupo
        cin>>grupoa;
        alum.setGrupo(grupoa);


        cout<<"Introduzca el liderazgo. 0=no es lider 1=es lider"<<endl; //set liderazgo
        cin>>liderazgoa;
        if((liderazgoa!=0) && (liderazgoa!=1)){
          cout<<"Error, ese valor no existe."<<endl;
          break;
        }else{
        alum.setLiderazgo(liderazgoa);
      }
        cout<<"Introduzca la parcialidad. 0=Completo 1=Parcial"<<endl; //set parcialidada
        cin>>parcialidada;
        if((parcialidada!=0) && (parcialidada!=1)){
          cout<<"Error, ese valor no existe."<<endl;
          break;
        }else{
          alum.setParcialidad(parcialidada);
        }

        cout<<"Intruzca curso."<<endl; //set curso
        cin>>cursoa;
        if (cursoa==0){
          cout<<"Error, campo obligatorio."<<endl;
          break;
        }else{
          alum.setCurso(cursoa);
        }

        introducirAlumno(alum);

      break;

      case 2:
      //mostrar alumno
      break;

      case 3:
      //mostrar listado
      break;

      case 4:
      //modificar
      break;

      case 5:
      //borrar
      break;

      case 6:
      //buscar
      break;

      case 7:
      //guardar y cargar
      break;
      }

    } while(menu!=8);
}