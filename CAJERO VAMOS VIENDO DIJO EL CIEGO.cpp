#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	string cuenta="814k2398";
    string cuenta2="200302";
    string usuario,titu;
    float saldo;
    int opcion;
    int amount = 1000;
    int amount2 = 1000;
    string transfe;
    float retiro,deposito,trans;
    char opc = 's' || 'S';
    char opc2 = 's' || 'S';
	do{
		system("cls");
		cout<<"Bienvenido al cajero automatico"<<endl;
		cout<<"ingrese su usuario"<<endl;
		cin>>usuario;
		system("cls");
		if(usuario==cuenta)
		{
			do{
		cout<<"Bienvenido "<<endl;
		cout<<"No. De Cuenta "<<cuenta<<endl;
		cout<<"Eliga una opcion: "<<endl;
        cout<<"1.- Consultar saldo"<<endl;
        cout<<"2.- Retirar dinero"<<endl;
        cout<<"3.- Cargar saldo"<<endl;
        cout<<"4.- Transferencia"<<endl;
        cout<<"5.- Salir de la cuenta"<<endl;
        cin>>opcion;
        system("cls");
        switch(opcion){
        	case 1:
        	cout<<"===CONSULTAR SALDO==="<<endl;
            cout<<"Su saldo es: "<<amount<<endl;
            break;
            case 2:
            cout<<"===RETIRAR DINERO==="<<endl;
            cout<<"Ingrese el monto a retirar"<<endl;
            cin>>retiro;
            if (retiro > amount){
                cout<<"Saldo insuficiente"<<endl;
            }
            else{
                amount=amount-retiro;
                cout<<"por favor, cobrar efectivo"<<endl;
                cout<<"tu saldo actual es: "<<amount<<endl;
            }break;
            case 3:
            cout<<"===CARGAR SALDO==="<<endl;
            cout<<"ingrese la cantidad para depositar: "<<endl;
            cin>>deposito;
            amount=amount+deposito;
            cout<<"tu saldo es: "<<amount<<endl;
            break;
            case 4:
            cout<<"===TRANSFERENCIA==="<<endl;
            cout<<"a que cuenta desea realizar la transferencia?"<<endl;
            cin>>cuenta2;
            if (transfe == cuenta2){
                cout<<"cuenta no encontrada"<<endl;
            }
            else{
                cout<<"cuanto desea transferir?"<<endl;
                cin>>trans;
                amount=amount-trans;
                amount2=amount2+trans;
                cout<<"tu saldo actual es: "<<amount<<endl;
            }
            break;
        	case 5:
        		cout<<"salir de la cuenta.(S/N)"<<endl;
        		cin>>opc;
        		system("cls");
        		break;
        	default:
            cout<<"eleccion invalida"<<endl;
		}
		cout<<"NO DESEA REALIZAR OTRO MOVIMIENTO?(S/N)"<<endl;
			cin>>opc2;
			system("cls");
			}while(opc2 == 's' || opc2 == 'S');
		}else if(usuario==cuenta2)
		{
			do{
		cout<<"Bienvenido"<<endl;
		cout<<"N0. De Cuenta "<<cuenta2<<endl;
		cout<<"Eliga una opcion: "<<endl;
        cout<<"1.- Consultar saldo"<<endl;
        cout<<"2.- Retirar dinero"<<endl;
        cout<<"3.- Cargar saldo"<<endl;
        cout<<"4.- Transferencia"<<endl;
        cout<<"5.- Salir de la cuenta"<<endl;
        cin>>opcion;
        system("cls");
        switch(opcion){
        	case 1:
        	cout<<"===CONSULTAR SALDO==="<<endl;
            cout<<"Su saldo es: "<<amount2<<endl;
            break;
            case 2:
            cout<<"===RETIRAR DINERO==="<<endl;
            cout<<"Ingrese el monto a retirar"<<endl;
            cin>>retiro;
            if (retiro > amount2){
                cout<<"Saldo insuficiente"<<endl;
            }
            else{
                amount2=amount2-retiro;
                cout<<"por favor, cobrar efectivo"<<endl;
                cout<<"tu saldo actual es: "<<amount2<<endl;
            }break;
            case 3:
            cout<<"===CARGAR SALDO==="<<endl;
            cout<<"ingrese la cantidad para depositar: "<<endl;
            cin>>deposito;
            amount2=amount2+deposito;
            cout<<"tu saldo es: "<<amount2<<endl;
            break;
            case 4:
            cout<<"===TRANSFERENCIA==="<<endl;
            cout<<"a que cuenta desea realizar la transferencia?"<<endl;
            cin>>cuenta;
            if (transfe == cuenta){
                cout<<"cuenta no encontrada"<<endl;
            }
            else{
                cout<<"cuanto desea transferir?"<<endl;
                cin>>trans;
                amount2=amount2-trans;
                amount=amount+trans;
                cout<<"tu saldo actual es: "<<amount2<<endl;
            }
            break;
        	case 5:
        		cout<<"salir de la cuenta.(S/N)"<<endl;
        		cin>>opc;
        		system("cls");
        		break;
        	default:
            cout<<"eleccion invalida"<<endl;
		}
		cout<<"NO DESEA REALIZAR OTRO MOVIMIENTO?(S/N)"<<endl;
			cin>>opc2;
			system("cls");
			}while(opc2 == 's' || opc2 == 'S');
			cout<<"SALIENDO DE LA CUENTA(s/n): "<<endl;
        cin>>opc;
		}else{
			cout<<"PIN O USUARIO INCORRECTO"<<endl;
			cout<<"REINTENTAR PROCESO..."<<endl;
			cout<<"PRECIONE 'S'..."<<endl;
			cin>>opc;
		}
			
			
	}while(opc == 's'|| opc == 'S');
}
