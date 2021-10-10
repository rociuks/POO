#include "Persona.cpp"
#include "Cliente.cpp"
#include "Empleado.cpp"
#include <iostream>
#include <cstdlib>
using namespace std;
main(){
	
	int opc;
	while(opc !=3)
	{
		
		cout <<"\t\t\t\t----------- Menu de Opciones----------\n" <<endl;
		
		cout<<"(1) Ingresar un Cliente"<<endl;
		cout<<"(2) Ingresar un Empleado"<<endl;
		cout<<"\nIndica el numero de opcion que desees ejecutar: ";
		cin>>opc;
    	system("cls");
		
		switch(opc){
	
			case 1:
				string nit,nombres,apellidos,direccion,fn;
					int telefono;
					cout<<"Ingrese Nit: ";
					cin>>nit;
					cout<<"Ingrese Nombres: ";
					cin>>nombres;
					cout<<"Ingrese Apellidos: ";
					cin>>apellidos;
					cout<<"Ingrese Direccion: ";
					cin>>direccion;
					cout<<"Ingrese Fecha de nacimiento: ";
					cin>>fn;
					cout<<"Ingrese Telefono: ";
					cin>>telefono;
					
					Cliente obj = Cliente(nombres,apellidos,direccion,fn,telefono,nit);
					obj.mostrar();
					cout<<"Ingrese Nit: ";
					cin>>nit;
					obj.setNit(nit);
					obj.setNombres(nombres);
					obj.setApellidos(apellidos);
					obj.setDireccion(direccion);
					obj.setFn(fn);
					obj.setTelefono(telefono);
					obj.mostrar();
				
					cout<<"Nit: "<<obj.getNit()<<endl;
					cout<<"Nombres: "<<obj.getNombres()<<endl;
					cout<<"Apellidos: "<<obj.getApellidos()<<endl;
					cout<<"Direccion: "<<obj.getDireccion()<<endl;
					cout<<"Fecha de nacimiento: "<<obj.getFn()<<endl;
					cout<<"Telefono: "<<obj.getTelefono()<<endl;
					system("pause");
					system("cls");
			break;
			
			case 2:
				system("cls");
				string nombres,apellidos,direccion,fn,puesto;
					int telefono,codigo_empleado;
					cout<<"Ingrese el Codigo: ";
					cin>>codigo_empleado;
					cout<<"Ingrese Puesto: ";
					cin>>puesto;
					cout<<"Ingrese Nombres: ";
					cin>>nombres;
					cout<<"Ingrese Apellidos: ";
					cin>>apellidos;
					cout<<"Ingrese Direccion: ";
					cin>>direccion;
					cout<<"Ingrese Fecha de nacimiento: ";
					cin>>fn;
					cout<<"Ingrese Telefono: ";
					cin>>telefono;
					
					Empleado obj = Empleado(nombres,apellidos,direccion,fn,telefono,codigo_empleado,puesto);
					obj.mostrar();
					cout<<"Ingrese Codigo: ";
					cin>>codigo_empleado;
					obj.setCodigo_empleado(codigo_empleado);
					obj.setPuesto(puesto);
					obj.setNombres(nombres);
					obj.setApellidos(apellidos);
					obj.setDireccion(direccion);
					obj.setFn(fn);
					obj.setTelefono(telefono);
					obj.mostrar();
				
					cout<<"Codigo: "<<obj.getCodigo_empleado()<<endl;
					cout<<"Puesto: "<<obj.getPuesto()<<endl;
					cout<<"Nombres: "<<obj.getNombres()<<endl;
					cout<<"Apellidos: "<<obj.getApellidos()<<endl;
					cout<<"Direccion: "<<obj.getDireccion()<<endl;
					cout<<"Fecha de nacimiento: "<<obj.getFn()<<endl;
					cout<<"Telefono: "<<obj.getTelefono()<<endl;
					system("pause");
					system("cls");
			break;
			
			default:
			cout<<"\nOpcion no valida" <<endl;
			}
			
			cout<<"\n";
    		cout<<"--------------------------------------------"<<endl;
    		cout<<"Desea regresar al Menu Principal?"<<endl;
   	        cout<<"Si / 1"<<endl;
            cout<<"No / 2 \n"<<endl;
            cin>> b;
            if (b==1)
            {
            system("cls");
            return    main();
            }else{
                exit (-1);
            }

			cout<<"\n\n\t----------- Gracias por utilizar este programa -----------\n" << endl;
		return 0;
		}
	
	}
}
