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
  Alumno buscarDNI(string dnia);
  void mostrarAlumno(Alumno alumno);
  void mostrarListado(Alumno alumno);
  void modificarAlumno();
  void borrarAlumno();
  void encontrarAlumno(string dnia);
};

#endif
