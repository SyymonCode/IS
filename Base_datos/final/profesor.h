//profesor.h

#ifndef PROFESOR_H
#define PROFESOR_H

#include <string>
#include <iostream>
using namespace std;

class Profesor{

private:
  //variables de la clase profesor
  string user_,pass_;

public:

  //clase profesor y funciones inline

  Profesor(string usuario, string pass);

  //set y get user
  inline string getUser()const{return user_;};
  inline void setUser(string user){user_=user;};

  //set y get pass
  inline string getPass()const{return pass_;};
  inline void setPass(string pass){pass_=pass;};

};

#endif
