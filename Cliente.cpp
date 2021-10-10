#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona{

  private : string nit;

  public :
  Cliente(){
  }
  Cliente(string nom,string ape,string dir,string f,int tel,string n) : Persona(nom,ape,dir,f,tel){ 
  nit = n;
  }
  
  void setNit(string n){nit = n;}
  void setNombres(string nom){nombres = nom;}
  void setApellidos(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setFn(string f){fn = f;}
  void setTelefono(int tel){telefono = tel;}

  string getNit(){	return nit;}
  string getNombres(){	return nombres;}
  string getApellidos(){	return apellidos;}
  string getDireccion(){	return direccion;}
  string getFn(){	return fn;}
  int getTelefono(){	return telefono;}
  
void mostrar(){
	cout<<"______________________"<<endl;
	cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fn<<","<<telefono<<endl;
}
};
