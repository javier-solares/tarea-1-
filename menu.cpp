#include <iostream>
using namespace std;

main () {
int sha;
	do {
		cout<<"------------BIENVENIDO AL MENU PRINCIPAL------------"<<endl;
        cout<<"SELECCIONE UNA DE LAS SIGGUIENTES OPCIONES"<<endl;
        cout<<"1 CLIENTE"<<endl;
        cout<<"2 EMPLEADO"<<endl;
        cout<<"9 EXIT"<<endl;
        cin>> sha;

        switch(sha){
		system("cls");
        case 1:
	system("cls");
	system("main1.exe"); cout<<"\n"<<endl; main();
	system("cls");
    break;	

    case 2:
	system("cls");
	system("main.exe"); cout<<"\n"<<endl; main();
	system("cls");
    break;	
		case 9:
		exit(1); 
		break;
		
		
		
break;
		}	
    
    } while(sha!=9);

system("pause");
return 0;

}

