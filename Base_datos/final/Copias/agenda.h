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
  list <class Alumno> datos_;

public:

  Agenda();

  void introducirAlumno(Alumno alumno);
  Alumno mostrarAlumnodni(string dnia);
  int mostrarListado();
  void modificarAlumno(Alumno alumno, string dnia);
  int borrarAlumno(string dnia);
  int encontrarAlumno(string dnia);
};

#endif
