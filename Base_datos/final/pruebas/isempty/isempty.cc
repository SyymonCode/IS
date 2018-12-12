//prueba

#include <string>
#include <iostream>
using namespace std;

int main(){
  string cadena="";
  cout<<"introducir"<<endl;
  getline(cin,cadena);
  if (cadena.empty()){
    cout<<"error cadena vacia."<<endl;
  }else{
    cout<<cadena<<endl;
  }
}
