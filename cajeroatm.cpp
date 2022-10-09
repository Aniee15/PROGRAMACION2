#include<iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <windows.h>
using namespace std;

// variables del usurio 1
////////////////////////////////////////////////////////

void menu();
void consultar();
void retirar();
void depositar();
void cambiodenip();
void trasferir();
void error();

 int saldo;
 int opc1;
 int retiro;
 int saldoinicial = 5000;
 string nip1 = "1234";
 string usuario;
 string usuario1 = "13579"; 
 string nnip;
// variables del usurio 2 
////////////////////////////////////////////////////////
void menu2();
void consultar2();
void retirar2();
void depositar2();
void cambiodenip2();
void trasferir2();
void error2();

int saldo2;
 int retiro2;
 int saldoinicial2 = 5000;
 string nip2 = "4321";
 string usuario2 = "12468";



// INICIO DEL PROGRAMA
int main(void)
{

    system("cls");
    cout<<"BIENVENIDO A CAJERO AUTOMATICO BBVA"<<endl;
    cout<<"INGRESE SU NUMERO DE CLIENTE: "<<endl;
    cin>>usuario;
    cout<<"INGRESE EL NIP: "<<endl;
    cin>>nnip;
    if ((nnip == nip1) && (usuario == usuario1))
    {
     menu();
    }
    else if ((nnip == nip2) && (usuario == usuario2))
    {
    menu2();	
	}
	else
    {
        cout<<"NIP INCORRECTO o NUMERO DE CUENTA INCORRECTO "<<endl;
        system("pause");
        return main();
    }
}
void menu()
{
    string num;


    while(true)
    {
system("cls");

    cout<<"BIENVENIDO A CAJERO AUTOMATICO BBVA"<<endl;
    cout<<"SELECCIONE SU TRANSACCION :"<<endl;
    cout<<"1:CONSULTA DE SALDO              3:DEPOSITO "<<endl;
    cout<<"2:RETIRO                         4:CAMBIO DE NIP "<<endl;
    cout<<"5:TRASFERIR                      6:SALIR "<<endl;
    cin>>num;

if (num == "1")
        {
            consultar();
            break;
        }
        else if (num== "2")
        {
            retirar();
            break;

        }
        else if (num=="3")
        {
            depositar();
            break;
        }
        else if (num=="4")
        {
          cambiodenip();
        break;
        }
        else if (num=="5")
        {
            trasferir();
            break;
        }
        else if (num=="6")
        {
            main();
            break;
        }
else
{
    error();
    break;
}
    }

}
void retirar()
{
    int cantidad;
    system("cls");
    cout<<"CANTIDAD A RETIRAR: "<<endl;
    cin>>cantidad;
    saldoinicial= saldoinicial - cantidad;
    if((saldoinicial>=cantidad) //&& (cantidad > 1) && (cantidad =!0))//(saldoinicial =!0))//(saldoinicial <1))
    //Esta línea: }while(((numero>20)||(numero<30))&&(numero!0))
    {
    	//saldoinicial= saldoinicial - cantidad;
    cout<<" LA CANTIDAD DE "<<cantidad<<" HA SIDO RETIRADO CON EXITO "<<endl;
    cout<<"SU SALDO ACTUAL ES:"<<saldoinicial<<endl;
    system("pause");
    menu();
    }
    else
    {
        system("cls");
		cout<<"SALDO INSUFICIENTE "<<endl;
		system("pause");
		retirar();
    }
}

void consultar()
{
    system("cls");
    cout<<"SALDO DISPONIBLE: "<<saldoinicial<<endl;
    system("pause");
    menu();
}


void depositar()
{
int cantidad2;
    system("cls");
    cout<<"CANTIDAD A DEPOSITAR: "<<endl;
    cin>>cantidad2;
    saldoinicial= saldoinicial + cantidad2;
    cout<<" LA CANTIDAD DE "<<cantidad2<<" HA SIDO DEPOSITADA CON EXITO "<<endl;
    cout<<"SU SALDO ACTUAL ES:"<<saldoinicial<<endl;
    system("pause");
    menu();
}
void cambiodenip()
{
    string nipnuevo;
    cout<<"INGRESE SU NUEVO NIP: "<<endl;
    cin>>nipnuevo;
    nip1=nipnuevo;
    cout<<"NIP CAMBIADO CON EXITO "<<endl;
    system("pause");
    menu();


}
void trasferir()
{

    string numtransf;
    int cantransf;
    system("cls");
    cout<<"INGRESE CLABE INTERBANCARIA O NUMERO DE TARJETA"<<endl;
    cout<<"A LA QUE DESEA TRASFERIR: "<<endl;
    cin>>numtransf;
    
    if (numtransf == usuario2)
    {
    	cout<<"INGRESE LA CANTIDAD A TRASFERIR:"<<endl;
    	cin>>cantransf;
    	saldoinicial = saldoinicial - cantransf;
    	saldoinicial2 = saldoinicial2 + cantransf;
    	
    	cout<<"TRANSACCION REALIZADA CON EXITO "<<endl;
    system("pause");
    menu();
    
    }
else 
{
    system("cls");
    cout<<"SALDO INSUFICIENTE "<<endl;
    system("pause");
    trasferir();
}
if (numtransf != usuario2)
{
cout<<"CUENTA INEXISTENTE, FAVOR DE INGRESAR LOS DATOS NUEVAMENTE "<<endl;
system("pause");
trasferir();	
	
}

}
void error ()
{
    system("cls");
    cout<<"OPCION INGRESADA INVALIDA "<<endl;
    system("pause");
    menu();

}

// aqui empieza el programa del segundo usuario
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void menu2()
{
    string num;


    while(true)
    {
system("cls");

    cout<<"BIENVENIDO A CAJERO AUTOMATICO BBVA"<<endl;
    cout<<"SELECCIONE SU TRANSACCION :"<<endl;
    cout<<"1:CONSULTA DE SALDO              3:DEPOSITO "<<endl;
    cout<<"2:RETIRO                         4:CAMBIO DE NIP "<<endl;
    cout<<"5:TRASFERIR                      6:SALIR "<<endl;
    cin>>num;

if (num == "1")
        {
            consultar2();
            break;
        }
        else if (num== "2")
        {
            retirar2();
            break;

        }
        else if (num=="3")
        {
            depositar2();
            break;
        }
        else if (num=="4")
        {
          cambiodenip2();
        break;
        }
        else if (num=="5")
        {
            trasferir2();
            break;
        }
        else if (num=="6")
        {
            main();
            break;
        }
else
{
    error2();
    break;
}
    }
}
void retirar2()
{
    int cantidad2;
    system("cls");
    cout<<"CANTIDAD A RETIRAR: "<<endl;
    cin>>cantidad2;
    saldoinicial2= saldoinicial2 - cantidad2;
    if(saldoinicial2>=cantidad2)
    {
    cout<<" LA CANTIDAD DE "<<cantidad2<<" HA SIDO RETIRADO CON EXITO "<<endl;
    cout<<"SU SALDO ACTUAL ES:"<<saldoinicial2<<endl;
    system("pause");
    menu2();
    }
    else
    {
        system("cls");
		cout<<"SALDO INSUFICIENTE "<<endl;
		system("pause");
		retirar2();
    }

}

void consultar2()
{
    system("cls");
    cout<<"SALDO DISPONIBLE: "<<saldoinicial2<<endl;
    system("pause");
    menu2();
}
void depositar2()
{
int cantidad2;
    system("cls");
    cout<<"CANTIDAD A DEPOSITAR: "<<endl;
    cin>>cantidad2;
    saldoinicial= saldoinicial + cantidad2;
    cout<<" LA CANTIDAD DE "<<cantidad2<<" HA SIDO DEPOSITADA CON EXITO "<<endl;
    cout<<"SU SALDO ACTUAL ES:"<<saldoinicial<<endl;
    system("pause");
    menu2();
}
void cambiodenip2()
{
    string nipnuevo2;
    cout<<"INGRESE SU NUEVO NIP: "<<endl;
    cin>>nipnuevo2;
    nip2=nipnuevo2;
    cout<<"NIP CAMBIADO CON EXITO "<<endl;
    system("pause");
    menu2();


}
void trasferir2()
{

    string numtransf2;
    int cantransf2;
    system("cls");
    cout<<"INGRESE CLABE INTERBANCARIA O NUMERO DE TARJETA"<<endl;
    cout<<"A LA QUE DESEA TRASFERIR: "<<endl;
    cin>>numtransf2;
    if (numtransf2 == usuario1)
    {
    	
    cout<<"INGRESE LA CANTIDAD A TRASFERIR:"<<endl;
    	cin>>cantransf2;
    	saldoinicial2 = saldoinicial2 - cantransf2;
    	saldoinicial = saldoinicial + cantransf2;
    	
    	cout<<"TRANSACCION REALIZADA CON EXITO "<<endl;
    system("pause");
    menu2();	
    	
	}
    	
    else 
{
    system("cls");
    cout<<"SALDO INSUFICIENTE "<<endl;
    system("pause");
    trasferir2();
}
    if (numtransf2 != usuario1)
{
cout<<"CUENTA INEXISTENTE, FAVOR DE INGRESAR LOS DATOS NUEVAMENTE "<<endl;
system("pause");
trasferir2();	
	
}
}


void error2 ()
{
    system("cls");
    cout<<"OPCION INVALIDA, PRESIONE ENTER PARA REGRESAR "<<endl;
    system("pause");
    menu2();
}


