#include "Persona.cpp"
#include <iostream>
using namespace std;
class Empleado : Persona {
    //atributos
    private : string codempleado, puesto;
                int sueldo ; 
    //constructor 
    public :
    Empleado(string nom,string ape,string dir, int tel,string c,string p, int s) : Persona (nom,ape,dir,tel){
        codempleado=c;
        puesto = p;
        sueldo = s;
    }
    //metodos
    //set (medificar)
    void setCodempleado (string c){codempleado = c;}
    void setPuesto (string p){puesto = p;}
    void setSueldo (int s){sueldo = s;}
    void setNombres(string nom ){nombres=nom;}
	void setApellidos(string ape){apellidos = ape;}
    void setDireccion (string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}

    //get (mostrar)
    string getCodempleado(){return codempleado;}
    string getPuesto(){return puesto;}
    int getSueldo(){return sueldo;}
	string getNombres() {return nombres;}
	string getApellidos(){return apellidos;}
    string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}

    //metodo enseñar
    void muestra(){
        cout<<"-----------------Datos del empleado---------------------"<<endl;
        cout<<codempleado<<", "<<puesto<<", "<<sueldo<<", "<<nombres<<", "<<apellidos<<", "<<direccion<<", "<<telefono<<endl;
    }
};
