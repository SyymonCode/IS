//alumno.h

#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>
using namespace std;

class Persona{

private:

  string DNI_,nombre_,apellidos_,email_,direccion_,nacimiento_;
  int telefono_,grupo_,liderazgo_,parcialidad_;

public:

  Persona(string DNI, string nombre,string apellidos,string email,string direccion,string nacimiento,int telefono);

  //set y get DNI
  inline string getDNI()const{return DNI_;};
  inline void setDNI(string DNI){DNI_=DNI;};

  //set y get nombre
  inline string getNombre()const{return nombre_;};
  inline void setNombre(string nombre){nombre_=nombre;};

  //set y get apellidos
  inline string getApellidos()const{return apellidos_;};
  inline void setApellido(string apellido){apellido_=nombre;};

  //set y get email
  inline string getEmail()const{return apellidos_;};
  inline void setEmail(string email){email_=email;};

  //set y get direccion
  inline string getDireccion()const{return direccion_;};
  inline void setDireccion(string direccion){direccion_=direccion;};

  //set y get nacimiento
  inline string getNacimiento()const{return nacimiento_;};
  inline void setNacimiento(string nacimiento){nacimiento_=nacimiento;};

  //set y get telefono
  inline int getTelefono()const{return telefono_;};
  inline void setTelefono(int telefono){telefono_=telefono;};
}

#endif
