#include <iostream>
#include <cstring>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void Menu();                                    
void Ingresar(struct Datos Persona[],int,int);    
void Mostrar(struct Datos Persona[],int);           
void ImprFicha(struct Datos Persona[],int,int);     
void Buscar(struct Datos Persona[],int);         
void BuscaFicha(struct Datos Persona[],int);     
void BuscaNombre(struct Datos Persona[],int);        
 
void Modificar(struct Datos Persona[],int);

struct Trello
{
    string Creation;
};
 
struct Datos
{
    string Asunto;
    string Descripcion;
 
    Trello Fecha;
};

int main()
{
    const int LEN = 2; 
 
    Datos Persona[LEN]; 
 
    int index = 0;  
    int opcion;     
    bool salir;     
 
    do
    {
        Menu();  
 
        cout << " ELEJIR OPCION : ";
        cin >> opcion;
        cin.ignore();
 
        switch (opcion)    
        {
            case 1:
                    system("clear");
                    Ingresar(Persona,index,LEN);
                    index++;
                    break;
            case 2:
                    system("clear");
                    Mostrar(Persona,index); 
                    break;
            case 3:
                    system("clear");
                    Buscar(Persona,index); 
                    break;
            case 4:
                    system("clear");
                    Modificar(Persona,index);
                    break;
            case 6:
                    salir = true;
                    break;
            default:
                    system("clear");
                    cout << "INGRESE UNA OPCION VALIDA \n\n";
                    break;
        }
    }while(salir == false);
 
    return 0;
}

void Menu()
{
    cout << "\t TRELLO \n\n";
 
    cout << " 1. CREAR NOTA " << endl;
    cout << " 2. MOSTRAR NOTAS " << endl;
    cout << " 3. BUSCAR NOTA " << endl;
    cout << " 4. MODIFICAR NOTA " << endl;
    cout << " 5. ELIMINAR NOTA " << endl;
    cout << " 6. SALIR " << endl;
}
void Ingresar(struct Datos Persona[], int numero, int TAM) 
{
    if(numero < TAM) 
    {
        cout << " NUMERO DE NOTA: #" << numero << endl << endl;
 
        cout << " TEMA: ";
        getline(cin,Persona[numero].Asunto);
        cout << " DESCRIPCION: ";
        getline(cin,Persona[numero].Descripcion);
        cout << " FECHA (DD/MM/AAAA): ";
        getline(cin, Persona[numero].Fecha.Creation);
        cout << endl << endl;
    }
    else
        cout << " LLEGO AL LIMITE DE LAS NOTAS" << endl << endl;
}

void ImprFicha(struct Datos Persona[], int x) 
{
    cout << " INFORMACION NOTA: #" << x << endl << endl;
    cout << " TEMA: " << Persona[x].Asunto << endl;
    cout << " DESCRIPCION: " << Persona[x].Descripcion << endl;
    cout << " FECHA  (DD/MM/AAAA): " << Persona[x].Fecha.Creation;
    cout << endl << endl;
}

void Mostrar(struct Datos Persona[], int numero)
{
    for(int i=0 ; i<numero ; i++)
    {
        ImprFicha(Persona,i);    
    }
    cin.get();        
    system("clear");  
}

void Buscar(struct Datos Persona[], int numero)
{
    bool exit;  
    do
    {   
        cout << " BUSQUEDA: \n\n";
        cout << " 1. # NOTA" << endl;
        cout << " 2. TEMA" << endl;
        cout << " 3. SALIR" << endl << endl;
 
        unsigned int op;
        cout << " INDIQUE UNA OPCION: ";
        cin >> op;
        cin.ignore();
        cout << endl;
 
        switch(op)  
        {
            case 1:
                system("clear");
                BuscaFicha(Persona,numero);  
                break;
            case 2:
                system("clear");
                BuscaNombre(Persona,numero); 
                break;
            case 3:
                exit = true;
                break;
 
            default:
                cout << "ERROR, ESCRIBA UNA OPCION VALIDA\n";
                break;
        }
    }while(exit == false);
 
    system("clear");    
}

void BuscaFicha(struct Datos Persona[], int numero)
{
    cout << " BUSQUEDA POR NOTA: \n\n";
 
    unsigned int Ficha;
    cout << " DIGITE # NOTA: ";
    cin >> Ficha;
    cin.ignore();
    cout << endl;
 
    for(int i=0 ; i<numero ; i++)
    {
        if(Ficha == i)
        {
            ImprFicha(Persona,i);
        }
    }
    cin.get();        
    system("clear");  
}

void BuscaNombre(struct Datos Persona[], int numero)
{
    cout << " BUSQUEDA POR TEMA: \n\n";
 
    string nomb;
    cout << " ESCRIBA EL ASUNTO: ";
    getline(cin,nomb);
    cout <<  endl;
 
    for(int i=0 ; i<numero ; i++)
    {
        if(nomb == Persona[i].Asunto)
        {
            ImprFicha(Persona,i);
        }
    }
    cin.get();
    system("clear");
}

void Modificar(struct Datos Persona[], int numero)
{
    cout << " MODIFICAR UNA NOTA: \n\n";
 
    string ASUN;
    cout << "ESCRIBA EL TEMA: ";
    getline(cin,ASUN);
    cout << endl;
 
    for(int i=0 ; i<numero ; i++)
    {
        if(ASUN == Persona[i].Asunto)
        {
            ImprFicha(Persona,i);
 
            cout << " TEMA: ";
            getline(cin,Persona[i].Asunto);
            cout << " DESCRIPCION: ";
            getline(cin,Persona[i].Descripcion);
            cout << " FECHA  (DD/MM/AAAA): ";
            getline(cin, Persona[i].Fecha.Creation);
            cout << endl << endl;
        }
    }
}