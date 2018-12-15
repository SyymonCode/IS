//agenda.cc

#include <string>
#include <iostream>
#include <list>
#include <cstdlib>
#include <fstream>
#include "agenda.h"
using namespace std;

Agenda::Agenda(){}

void Agenda::introducirAlumno(Alumno alumno){
  list <Alumno>::iterator i;
  for(i=datos_.begin();i!=datos_.end();i++){
    if(alumno.getDNI()==i->getDNI()){
      cout<<"Ese DNI ya esta registrado."<<endl;
      break;
    }
  }
  datos_.push_back(alumno);
<<<<<<< HEAD
}

<<<<<<< HEAD
void Agenda::introducirAlumno(Alumno alumno){
  list <Alumno>::iterator i;
  for(i=datos_.begin();i!=datos_.end();i++){
    if(alumno.getDNI()==i->getDNI()){
      cout<<"El alumno existe."<<endl;
      break;
    }
  }
  datos_.push_back(alumno);
}
=======
=======
} //1
>>>>>>> c87a31d5f9832406b2c00dea3eea852fdc0ad0de

Alumno Agenda::mostrarAlumnodni(string dnia){
  list <Alumno>::iterator i;
  for(i=datos_.begin();i!=datos_.end();i++){
    if(dnia==i->getDNI()){
      return *i;
    }
  }} //2.1

int Agenda::mostrarListado(){

  list <Alumno>::iterator i;
  if(datos_.empty()){
    return 0;
  }else{
    ofstream ficherosalida("Listado.md");
    for(i=datos_.begin();i!=datos_.end();i++){
      ficherosalida<<"DNI: "<<(*i).getDNI()<<endl;
      ficherosalida<<"Nombre: "<<(*i).getNombre()<<endl;
      ficherosalida<<"Apellidos: "<<(*i).getApellidos()<<endl;
      ficherosalida<<"Correo: "<<(*i).getEmail()<<endl;
      ficherosalida<<"Direccion: "<<(*i).getDireccion()<<endl;
      ficherosalida<<"Nacimiento: "<<(*i).getNacimiento()<<endl;
      ficherosalida<<"Telefono: "<<(*i).getTelefono()<<endl;
      ficherosalida<<"Grupo: "<<(*i).getGrupo()<<endl;
      ficherosalida<<"Liderazgo: "<<(*i).getLiderazgo()<<endl;
      ficherosalida<<"Parcialidad: "<<(*i).getParcialidad()<<endl;
      ficherosalida<<"Curso: "<<(*i).getCurso()<<endl;
      ficherosalida<<endl;
    }
    ficherosalida.close();
    return 1;
  }} //3

//int Agenda::modificarAlumno(string dnia){} //4

int Agenda::borrarAlumno(string dnia){
  list <Alumno>::iterator i;
  for(i=datos_.begin(); i!=datos_.end();i++){
    if(dnia==i->getDNI()){
      datos_.erase(i);
      return 1;
    }
  }
  return 2;
}

int Agenda::encontrarAlumno(string dnia){
  list <Alumno>::iterator i;
  for(i=datos_.begin();i!=datos_.end();i++){
    if(dnia==i->getDNI()){
      return 1;
    }else{
      return 0;
    }
    break;
  }
<<<<<<< HEAD
}


>>>>>>> b24155a8e1b6b805cdbe77e066ab474948cc896f
//void Agenda::
=======
} //6
>>>>>>> c87a31d5f9832406b2c00dea3eea852fdc0ad0de
