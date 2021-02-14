#include "Empleado.cpp"
#include <iostream>
using namespace std;
main (){
    string nombres,apellidos,direccion, codempleado, puesto;
    int telefono,sueldo;
    char siguiente;
    
    cout<<"-------------------------EMPLEADO------------------------------"<<endl;
    cout<<"Ingrese Codigo de empleado: ";
    cin>>codempleado;
    cout<<"Ingrese Nombres: ";
    cin>>nombres;
    cout<<"Ingrese Apellidos: ";
    cin>> apellidos;
    cout<<"Ingrese Puesto: ";
    cin>> puesto;
    cout<<"Ingrese Sueldo: ";
    cin>> sueldo;
    cout<<"Ingrese Direccion: ";
    cin>>direccion;
    cout<<"Ingrese Telefono: ";
    cin>>telefono;

    //instanciar objeto empleado
    Empleado obj= Empleado(nombres,apellidos,direccion,telefono,codempleado,puesto,sueldo);
    cout<<"\n"<<endl;
    obj.muestra();

    cout<<"\n"<<endl;
	cout<<"Deseas modificar algun dato si=(s) no=(n)"<<endl;
	cin>>siguiente; 
	system("cls");										
	if (siguiente=='s') {
         // modificar atributos
        cout<<"-------------modificar-----------------"<<endl;
        cout<<"Modificar Codigo de empleado:";
        cin>>codempleado;
        obj.setCodempleado(codempleado);
        cout<<"Modificar Nombre:";
        cin>>nombres;
        obj.setNombres(nombres);
        cout<<"Modificar apellido:";
        cin>>apellidos;
        obj.setApellidos(apellidos);
        cout<<"Ingrese Puesto: ";
        cin>> puesto;
        obj.setPuesto(puesto);
        cout<<"Ingrese Sueldo: ";
        cin>> sueldo;
        obj.setSueldo(sueldo);
        cout<<"Ingrese Direccion: ";
        cin>>direccion;
        obj.setDireccion(direccion);
        cout<<"Modificar telefono:";
        cin>>telefono;
        obj.setTelefono(telefono);       
        cout<<"\n"<<endl;
        obj.muestra();

    }


}
