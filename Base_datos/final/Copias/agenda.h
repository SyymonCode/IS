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
  void introducirAlumno();
  void mostrarAlumno();
  void mostrarListado();
  void modificarAlumno();
  void borrarAlumno();
  int buscarAlumno();
};

#endif