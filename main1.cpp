#include "Cliente.cpp"
#include<iostream>
using namespace std;
main (){
   string nit,nombres,apellidos,direccion ;
   char siguiente;
   int telefono;
   cout<<"---------------------------CLIENTE--------------------"<<endl;
   cout<<"Ingrese Nit: ";
   cin>>nit;
   cout<<"Ingrese Nombres: ";
   cin>>nombres;
   cout<<"Ingrese Apellidos: ";
   cin>> apellidos;
   cout<<"Ingrese Direccion: ";
   cin>>direccion;
   cout<<"Ingrese Telefono: ";
   cin>>telefono;

   //instansear objeto
   Cliente obj= Cliente(nombres,apellidos,direccion,telefono,nit);
   cout<<"\n"<<endl;
   obj.mostrar();
   cout<<"\n"<<endl;
	cout<<"Deseas modificar algun dato si=(s) no=(n)"<<endl;
	cin>>siguiente; 
	system("cls");										
		if (siguiente=='s') {
         // modificar atributos
         cout<<"------------------modificar----------------"<<endl;
         cout<<"Modificar Nit:";
         cin>>nit;
         obj.setNit(nit);
         cout<<"Modificar Nombre:";
         cin>>nombres;
         obj.setNombres(nombres);
         cout<<"Modificar apellido:";
         cin>>apellidos;
         obj.setApellidos(apellidos);
         cout<<"Ingrese Direccion: ";
         cin>>direccion;
         obj.setDireccion(direccion);
         cout<<"Modificar telefono:";
         cin>>telefono;
         obj.setTelefono(telefono);  
         cout<<"\n"<<endl;     
         obj.mostrar();

      }


}
