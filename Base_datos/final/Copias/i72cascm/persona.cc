//persona.cc
//métodos de la clase alumnos

#include <string>
#include <iostream>
#include "persona.h"
using namespace std;

Persona::Persona(string DNI, string nombre, string apellidos, string email, string direccion, string nacimiento, int telefono){
  DNI_=DNI;
  nombre_=nombre;
  apellidos_=apellidos;
  email_=email;
  direccion_=direccion;
  nacimiento_=nacimiento;
  telefono_=telefono;
}
