#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
#include<conio.h>
using namespace std;    
const char DIR_ARCHIVO [] ="NOTAS.txt";


struct Nota{
	
	char tema[50];
	char descripcion[200];
	char fecha[45];
	
};

void ingresarNota(Nota c);
Nota leerNota();
bool existeNota (char tema[]);
Nota buscarContacto(char tema[]);
void mostrarNota(Nota c);
void listarNota();
void eliminarNota(char tema[]);
void actualizarNota(char tema[]);

void menuIngresar();
void menuBuscar();
void menuListar();
void menuEliminar();
void menuActualizar();

int main(){

int op;
do{
	
system("cls");
cout<<"************************************************"<<endl;
cout<<"TRELLO** CREADOR DE NOTAS "<<endl<<endl<<endl;
cout<<"CREAR NOTA ..............[1]"<<endl<<endl;
cout<<"BUSCAR NOTA ................[2]"<<endl<<endl;
cout<<"MOSTRAR NOTA ............[3]"<<endl<<endl;
cout<<"ELIMINAR NOTA ..............[4]"<<endl<<endl;
cout<<"MODIFICAR NOTA ............[5]"<<endl<<endl;
cout<<"SALIR...........................[6]"<<endl<<endl;
cout<<"************************************************"<<endl;	
cout<<"INGRESE UNA OPCION --> ";
cin>>op;
cin.ignore();
switch(op){
	case 1:system("cls");
	menuIngresar();
	break;
	case 2:
	menuBuscar();
	break;
	case 3:system("cls");
	menuListar();
	break;
	case 4:
	system("cls");	
	menuEliminar();
	break;
	case 5:
	system("cls");
	menuActualizar();
	break;
	case 6:break;
	default: cout<<"OPCION INCORRECTA "<<endl;
}
}while(op!=6);
getch();

	return 0;

}

void ingresarNota(Nota c){
	ofstream salida;
	salida.open(DIR_ARCHIVO,ios::binary | ios::app);
	salida.write((char*) &c,sizeof(Nota));
	salida.close();
}


Nota leerNota(){
	Nota c;
	cout<<"TEMA: ";
	cin.getline(c.tema,50);
	cout<<"DESCRIPCION: ";
	cin.getline(c.descripcion,200);
	cout<<"FECHA (dd/mm/aaaa): ";
	cin.getline(c.fecha,45);

return c;	
}
bool existeNota (char tema[]){
	Nota c;
	ifstream entrada;
	entrada.open(DIR_ARCHIVO,ios::binary);
	if(entrada.good()){
		
		while(entrada.read((char*) &c,sizeof(Nota))){
			if(strcmp(tema,c.tema)==0 ){
				
				entrada.close();
				return true;
				
			}
		}
		entrada.close();
		return false;
	} 
	else{
		entrada.close();
		return false;
	}
	
}
Nota buscarNota(char tema[]){
	Nota c;
	ifstream entrada;
	entrada.open(DIR_ARCHIVO,ios::binary);
	if(entrada.good()){
		
		while(entrada.read((char*) &c,sizeof(Nota))){
			if(strcmp(tema,c.tema)==0){
				
				entrada.close();
				return c;
				
			}
		}
	} 	
}

void mostrarNota(Nota c){
	
	cout<<"TEMA   :"<<c.tema<<endl;
	cout<<"DESCRIPCION :"<<c.descripcion<<endl;
	cout<<"FECHA (dd/mm/aaaa) :"<<c.fecha<<endl;
	cout<<endl;
	
}
void listarNota(){
	ifstream entrada;
	entrada.open(DIR_ARCHIVO,ios::binary);
	Nota c;
	if(entrada.good()){
	while(entrada.read((char*)&c,sizeof(Nota))){
		mostrarNota(c);
	}		
	}
else{
	cout<<"NO SE PUEDE LEER EL ARCHIVO "<<endl;
}
entrada.close();
}

void eliminarNota(char tema[]){

	ifstream entrada;
	ofstream temporal;
		
	entrada.open(DIR_ARCHIVO,ios::binary);
	temporal.open("temp.dat",ios::binary);
	Nota c;
	if(entrada.good()){

	
		while(entrada.read((char*) &c,sizeof(Nota))){
		if(strcmp(tema,c.tema)!=0 ){
		temporal.write((char*)&c,sizeof(Nota));
		}	
		}
	}

	entrada.close();
	temporal.close();

	remove(DIR_ARCHIVO);
	rename("temp.dat",DIR_ARCHIVO);
	
}
void actualizarNota(char tema[],char descripcion[]){

	
	
	ifstream entrada;
	ofstream temporal;
		
	entrada.open(DIR_ARCHIVO,ios::binary);
	temporal.open("temp.dat",ios::binary);
	Nota c;
	if(entrada.good()){

	
		while(entrada.read((char*) &c,sizeof(Nota))){
		if(strcmp(tema,c.tema)==0){
			Nota actualizado=leerNota();
		temporal.write((char*)&actualizado,sizeof(Nota));
		}
		else {
		temporal.write((char*)&c,sizeof(Nota));
		}	
		}
	}

	entrada.close();
	temporal.close();
	remove(DIR_ARCHIVO);
	rename("temp.dat",DIR_ARCHIVO);

}

void menuIngresar(){
	cout<<endl;
	cout<<"INGRESAR NUEVA NOTA: "<<endl;
	Nota nueva=leerNota();
	ingresarNota(nueva);
	cout<<endl;
	cout<<"NOTA AGREGADA CON EXITO  "<<endl;
	cout<<"PRESIONE ENTER PARA CONTINUAR"<<endl;
	getch();
}
void menuBuscar(){
	cout<<endl;
	cout<<"BUSCAR NOTA: "<<endl;
	char tema[30];

	cout<<"INGRESE EL TEMA DE LA NOTA A BUSCAR   :"<<endl;
	cout<<"TEMA  :";
	cin.getline(tema,30);

	if(existeNota(tema)){
		
		Nota buscado=buscarNota(tema);
		mostrarNota(buscado);
	}
	else{
	cout<<endl;
	cout<<"NO SE ENCUENTRA LA NOTA   :"<<endl;
	}
	getch();
}
void menuListar(){
	cout<<endl;
	cout<<"LISTA DE NOTAS    :"<<endl;
	cout<<endl;
	listarNota();
	
	getch();
}
void menuEliminar(){
	cout<<endl;
	cout<<"ELIMINAR NOTA   :"<<endl;
	char tema[30];
	cout<<endl;
	cout<<"TEMA DE LA NOTA A ELIMINAR  :";
	cin.getline(tema,30);


	if(existeNota(tema)){
	Nota eliminar=buscarNota(tema);
	int opcion;
	cout<<"SEGURO QUE DESEAS ELIMINAR LA NOTA ?"<<endl;	
	mostrarNota(eliminar);

do{
		cout<<" SI [1]...... NO [2] :";
		cin>>opcion;
	switch(opcion){
		
		case 1:
		eliminarNota(tema);
		
		cout<<"NOTA ELIMINADA CORRECTAMENTE "<<endl;
		break;
		case 2:
		break;
		default:
		cout<<"OPCION INCORRECTA "<<endl;
	}
	}while(opcion!=1 && opcion!=2);
	}
	else{
		cout<<"NO EXISTE LA NOTA";
	}
		getch();
}
void menuActualizar(){
	cout<<endl;
	cout<<"ACTUALIZAR NOTA    :"<<endl;
	char tema[30],descripcion[45];
	cout<<endl;
	cout<<"INGRESE EL TEMA:"<<endl;
	cout<<"TEMA  :";
	cin.getline(tema,30);
	

	if(existeNota(tema)){
	Nota buscado=buscarNota(tema);
	cout<<endl;
	cout<<"NOTA A MODIFICAR :"<<endl;	
	mostrarNota(buscado);
	actualizarNota(tema,descripcion);
	cout<<endl;
	cout<<"SE ACTUALIZO LA NOTA "<<endl;
	cout<<"PRESIONE ENTER PARA CONTINUAR"<<endl;

}
	else{
		cout<<endl;
		cout<<"NO EXISTE LA NOTA ";
	}
	getch();
}