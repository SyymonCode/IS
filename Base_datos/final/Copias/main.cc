//main.cc

#include <string>
#include <iostream>
#include "alumno.h"
#include "agenda.h"
using namespace std;

int main(){

  int menu;

    do{
      cout<<"Bienvenido/a"<<endl;
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
      //introducir
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
