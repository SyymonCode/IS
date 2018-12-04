#include <stdio>
#include <string>
#include <stdlib>
using namespace std;

//Se establecio que la variable coordinador es un boolean

void guardar()
{
  string user,password;

  cout<<"Introduce el usuario"<<endl;
  cin>>user;
  cout<<"Introduce la contraseña"<<endl;
  cin>>password;

  if((user==user-fichero-credencial) && (password==pass-fichero-credencial))
  {
    if(variableCoord-fichero-credencial==true)
    {
      /*
      Pasar mediante ficheros la informacion de la agenda a la copia de seguridad
      */
      cout<<"Datos guardados"<<endl;
    }
    else
    {
      cout<<"Error, no tienes permitido guardar"<<endl;
      exit(EXIT_FAILURE);
    }
  }
  else
  {
    cout<<"Error, usuario o contraseña incorrectos"
    exit(EXIT_FAILURE);
  }
return(0);
}
