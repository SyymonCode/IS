//persona.h
//La clase persona representaa tnto a alumnos como profesores
#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>
using namespace std;

class Persona{

private:

  string DNI_,nombre_,apellidos_,email_,direccion_,nacimiento_;
  int telefono_;

public:

  Persona(string DNI, string nombre="",string apellidos="",string email="",string direccion="",string nacimiento="",string telefono=0);

}

#endif
