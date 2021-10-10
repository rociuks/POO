#include "Persona.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona{
	
	private : int codigo_empleado;
	string puesto;
	
	public :
	Empleado(){
	}				
	Empleado(string nom,string ape,string dir,string f,int tel,int cod,string p) : Persona(nom,ape,dir,f,tel){	
	codigo_empleado = cod;
	puesto = p;
	}
	
	void setCodigo_empleado(int cod){codigo_empleado = cod;}
	void setPuesto(string p){puesto = p;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFn(string f){fn = f;}
	void setTelefono(int tel){telefono = tel;}
	
	int getCodigo_empleado(){	return codigo_empleado;}
	string getPuesto(){	return puesto;}
    string getNombres(){	return nombres;}
    string getApellidos(){	return apellidos;}
    string getDireccion(){	return direccion;}
    string getFn(){	return fn;}
    int getTelefono(){	return telefono;}
    
    void mostrar(){
	cout<<"______________________"<<endl;
	cout<<codigo_empleado<<","<<puesto<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fn<<","<<telefono<<endl;
}
};
