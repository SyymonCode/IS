#include <stdio>
#include <string>
#include <stdlib>

using namespace std;

void introducir()
{
  int grupo,curso;
  string dni,email, nombre, apellido, telefono, direccion, fecha;
  bool lider,tiempo;  //Tiempo parcial o no
  cout<<"Introduce el DNI"<<endl;
  cin>>dni;


  if(dni-no-existe-en-agenda)
  {
      guardar-dni-en-fichero;
      cout<<"Introduce el email"<<endl;
      cin>>email;

      if(email-no-existe-en-agenda)
      {
        guardar-email-en-fichero;
        cout<<"Introduce el grupo, introduce 0 si no quieres ningun grupo"<<endl;
        cin>>grupo;

        if(grupo--existe-en-fichero || grupo==0)
        {
          guardar-grupo-en-fichero; //Aunque se seleccione 0 como grupo, el grupo "0" significa no pertenecer a ningun grupo
          cout<<"Introduce 0 si no es lider o si no quieres indicar nada y 1 si es lider"
          cin>>lider;

          if (lider-no-existe-en-fichero || lider==0) //Retocar esta parte
          {
              guardar-lider;

              cout<<"Introduce el nombre"<<endl;
              cin<<nombre;
              guardar-nombre;

              cout<<"Introduce el apellido"<<endl;
              cin<<apellido;
              guardar-apellido;

              cout<<"Introduce el telefono"<<endl;
              cin<<telefono;
              guardar-telefono;

              cout<<"Introduce el direccion"<<endl;
              cin<<direccion;
              guardar-direccion;

              cout<<"Introduce el fecha de nacimiento"<<endl;
              cin<<fecha;
              guardar-fecha;

              cout<<"Introduce el curso mas alto matriculado"<<endl;
              cin<<curso;
              guardar-curso;

              cout<<"Introduce si es a tiempo parcial o no"<<endl;
              cin<<tiempo;
              guardar-tiempo;
          }
          else
          {
            cout<<"Error, el lider ya existe"<<endl;
            exit(EXIT_FAILURE);
          }
        }
        else
        {
          cout<<"Error, el grupo no existe"<<endl;
          exit(EXIT_FAILURE);
        }
      }
      else
      {
        cout<<"Error, el mail ya existe"<<endl;
        exit(EXIT_FAILURE);
      }
  }
  else
  {
    cout<<"Error, ya existe el DNI"<<endl;
    exit(EXIT_FAILURE);
  }
exit(0);
}
