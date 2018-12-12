//agenda.cc

#include <string>
#include <iostream>
#include <list>
#include <cstdlib>
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
}


void Agenda::mostrarAlumno(Alumno alumno){
  list <Alumno>::iterator i;
  for(i=datos_.begin();i!=datos_.end();i++){
    if(alumno.getDNI()==i->getDNI()){
      cout<< "Alumno encontrado"<<endl;
      cout<<"\n"<<i->getNombre()<<endl;
    }else{
      cout<<"Alumno no encontrado"<<endl;
    }
    break;
  }
}

void Agenda::mostrarListado(Alumno alumno){
  list <Alumno>::iterator i;
}

void Agenda::buscarAlumno(Alumno alumno){
  list <Alumno>::iterator i;
  for(i=datos_.begin();i!=datos_.end();i++){
    if(alumno.getDNI()==i->getDNI()){
      cout<< "Alumno encontrado"<<endl;
    }else{
      cout<<"Alumno no encontrado"<<endl;
    }
    break;
  }
}


//void Agenda::
