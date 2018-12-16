//agenda.h

#ifndef AGENDA_H
#define AGENDA_H

#include <string>
#include <iostream>
#include <list>
#include "alumno.h"
using namespace std;

class Agenda{

private:
  list <class Alumno> datos_; //lista para los datos de alumnos

public:

  //Funciones de agenda.cc

  Agenda();

  void introducirAlumno(Alumno alumno); //1
  Alumno mostrarAlumnodni(string dnia); //2.1
  void mostrarAlumnoapellidos(string apellidosa); //2.2
  void mostrarAlumnogrupo(int grupoa); //2.3
  int mostrarListado(); //3
  void modificarAlumno(Alumno alumno, string dnia); //4
  int borrarAlumno(string dnia); //5
  int encontrarAlumno(string dnia); //6
};

#endif
