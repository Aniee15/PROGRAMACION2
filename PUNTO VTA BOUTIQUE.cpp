#include <iostream>
#include <iomanip>
#include <ctime>
#include <stdlib.h>

using namespace std;

int buscar(string name);

void Administrador();
void Altas();
void Bajas();
void Modificaciones();
void Inventario();
void Usuarios();

void Altas_u();
void Bajas_u();
void Consultas_u();
void Modificaciones_u();
void Mostrar_u();

void Ventas();
string cliente[20] = {};
int total_venta_prod [100] = {};
int total_vendedor[100] = {};
int gran_total;
int check_sell = 0;
int subtotal_2[100] = {};
int cantidad[100] = {};
int egresos_vendedor[100]={};
int egresos_total;

void Verify_admin();
void Verify_seller();

int id [100] = {1, 2, 3, 4, 5};
string producto [100] = {"BLUSA", "PANTALON", "CAMISA", "FALDA", "CALCETINES"};
int preciocompra[100] = {70,220 ,170, 170, 20};
int precioventa[100] = {100, 250, 200, 200, 50};
int existencia [100] = {10, 10, 10, 10, 10};
int st[100] = {1, 1, 1, 1, 1};
int total = 5;

int buscar_a(string admin);
string user_admin[100] = {"ANA","ana","MARIA","maria"};
int pass_a[100] = {1111,1111,2222,2222};
int check_admin;
int st_admin[100] = {1, 1, 1, 1};
int total_admin = 2;

int buscar_v(string seller);
string user_seller[100] = {"KAREN","karen","NORA","nora"};
int pass_v[100] = {3333,3333,4444,4444};
int st_seller[100] = {1, 1, 1 , 1};
int check_seller;
int total_seller = 2;

int i_b;
int i_ba;
int i_bv;

int main() {
    int i;
    int j;
    int opc;
    time_t tSac = time(NULL);
    struct tm* tmP = localtime(&tSac);
    do {
    	system("cls");
    	cout<<"****************************"<<endl;
        cout<<"*     BOUTIQUE DE ANA      *"<<endl<<endl;
		cout<<"****************************"<<endl;
        cout<<"*      MENU PRINCIPAL      *"<<endl<<endl;
        cout<<"*    1. ADMINISTRADOR      *"<<endl;
        cout<<"*    2. VENTAS             *"<<endl;
        cout<<"*    3. SALIR              *"<<endl<<endl;
        cout<<"****************************"<<endl;
        cin>>opc;
        switch (opc) {
            case 1: Verify_admin();
            {
                if (check_admin == 1)
                    Administrador();
                else
                    if (check_admin == 0)
                    cout << "HA EXEDIDO EL LIMITE DE LOS INTENTOS"<<endl;
                break;
            }
            case 2: Verify_seller();
            {
                if (check_seller == 1)
                    Ventas();
                else
                    if (check_seller == 0)
                    cout << "HA EXEDIDO EL LIMITE DE LOS INTENTOS"<<endl;
                break;
            }
                break;
            case 3:
            {
                if (check_sell == 1) {
                    for (j = 0; j < total_seller; j++){
                        gran_total = total_vendedor[j] + gran_total;
                        egresos_total=egresos_vendedor[j]+egresos_total;
                    }
                    
                    cout << "PRODUCTO" << setw(10) << "CANTIDAD" << setw(16) << "PRECIO UNITARIO" << setw(10) << "SUBTOTAL"<<endl;
                    for (i = 0; i < total; i++)
                        if (st[i] == 1 && cantidad[i] > 0)
                            cout << setw(8) << producto[i] << setw(10) << cantidad[i] << setw(16) << precioventa[i] << setw(10) << subtotal_2[i] << endl;
                    cout << setw(41) << "TOTAL: $" << gran_total << endl;
                    cout<<endl;
                    cout<<"UTILIDADES: $"<<gran_total-egresos_total;
                }
                system("cls");
                cout<<"\n\n";
                cout << "PRESIONE *ENTER* PARA SALIR "<<endl;
            }
                break;
            default: cout << "OPCION INVALIDA"<<endl;
        }
    } while (opc != 3);
    //cout<<"OPCION INVALIDA"<<endl;
    return 0;
}

int buscar_a(string admin) {
    i_ba = 0;
    while (i_ba < total_admin && user_admin[i_ba] != admin)
        i_ba++;
    if (i_ba == total_admin)
        return -1;
    else
        if (st_admin[i_ba] == 0) {
        return -2;
    } else
        return i_ba;
}

void Verify_admin() {
    string usuario;
    int pos;
    int pass;
    int i;
    i = 0;
    while (i < 3) 
	{
    	system("cls");
        cout << "INGRESE NOMBRE DEL USUARIO ADMINISTRADOR: ";
        cin>>usuario;
        cout << "INGRESAR CONTRASENA: ";
        cin>> pass;
        pos = buscar_a(usuario);
        if (pos == -1)
            cout << "USUARIO O CONTRASEÑA INCORRECTOS. QUEDAN: " << 2 - i << " INTENTOS\n";
        else
            if (pos == -2)
            cout << "USUARIO ESTA DADO DE BAJA";
        else
            if (pass == pass_a[pos]) {
            check_admin = 1;
            break;
        } else
            cout << "USUARIO O CONTRASEÑA INCORRECTOS. QUEDAN:" << 2 - i << " INTENTOS\n";
        i++;
    }
    if (i > 2)
        check_admin = 0;
}
	
int buscar_v(string seller) {
    i_bv = 0;
    while (i_bv < total_seller && user_seller[i_bv] != seller)
        i_bv++;
    if (i_bv == total_seller)
        return -1;
    else
        if (st_seller[i_bv] == 0) {
        return -2;
    } else
        return i_bv;
}

void Verify_seller() {
    string usuario;
    int pos;
    int pass;
    int i;
    i = 0;
    while (i < 3) {
    	system("cls");
        cout << "INGRESE NOMBRE DE USUARIO VENDEDOR "<<endl;
        cin>>usuario;
        cout << "INGRESE LA CONTRASENA: "<<endl;
        cin>> pass;
        pos = buscar_v(usuario);
        if (pos == -1){
            cout << "USUARIO O CONTRASENA INCORRECTOS. QUEDAN: " << 2 - i << " INTENTOS\n";
            system("pause");
        }
        else if (pos == -2){
            cout << "USUARIO ESTA DADO DE BAJA\n";
            system("pause");
        }
        else if (pass == pass_v[pos]) {
            check_seller = 1;
            break;
        } else
            cout <<"USUARIO O CONTRASENA INCORRECTOS. QUEDAN: " << 2 - i << " INTENTOS\n";
            system("pause");
        i++;
    }
    if (i > 2)
        check_seller = 0;
}

int buscar(string name) {
    i_b = 0;
    while (i_b < total && producto[i_b] != name)
        i_b++;
    if (i_b == total)
        return -1;
    else
        if (st[i_b] == 0) {
        return -2;
    } else
        return i_b;
}

void Administrador() {
    int opc;
	do {
		system("cls");
        cout << "MENU ADMINISTRADOR\n";
        cout << "1. ALTAS\n";
        cout << "2. BAJAS\n";
        cout << "3. MODIFICACIONES\n";
        cout << "4. MOSTRAR INVENTARIO\n";
        cout << "5. ADMINISTRACION DE USUARIOS\n";
        cout << "6. REGRESAR\n";
        cout << "OPCIONES: ";
        cin>>opc;
        switch (opc) {
            case 1: Altas();
                break;
            case 2: Bajas();
                break;
            case 3: Modificaciones();
                break;
            case 4: Inventario();
                break;
            case 5: Usuarios();
                break;
            case 6:
                break;
            default: cout << "OPCION INVALIDA\n";
        }
    } while (opc != 7);
}

void Altas() {
    int i;
    int pos;
    int opc;
    string nombre;
    system("cls");
    cout << "*********** A L T A S  ***********\n";
        cout << "INGRESE PRODUCTO: ";
        cin>>nombre;
        pos = buscar(nombre);
        if (pos == -1) {
            i = total;
            do {
                cout << "INGRESE PRECIO DE COMPRA: ";
                cin >> preciocompra[i];
                cout << "INGRESE PRECIO DE VENTA: ";
                cin >> precioventa[i];
                if (precioventa[i] <= preciocompra[i])
                    cout << "EL PRECIO DE VENTA DEBE SER MAYOR AL PRECIO DE COMPRA"<<endl;
            } while (precioventa[i] <= preciocompra[i]);
                cout << "INGRESE CANTIDAD EN EXISTENCIA: ";
                cin >> existencia[i];
            id[i] = i + 1;
            producto[i] = nombre;
            st[i] = 1;
            i++;
            total = i;
          cout << " EL PRODUCTO HA SIDO DADO DE ALTA EXITOSAMENTE"<<endl;
          system("pause");
          
        } else
            if (pos == -2) {
            i = i_b;
                cout << "EL PRODUCTO " << nombre << " ESTA DADO DE BAJA, ¿DESEA REACTIVARLO?"<<endl;
                cout << "1. SI­\n";
                cout << "2. NO\n";
                cin >> opc;
                switch (opc) {
                    case 1:
                    {
                            cout << "INGRESE PRECIO DE COMPRA: ";
                            cin >> preciocompra[i];
                            cout << "INGRESO PRECIO DE VENTA: ";
                            cin >> precioventa[i];
                            if (precioventa[i] <= preciocompra[i]){
                                cout << "EL PRECIO DE VENTA DEBE SER MAYOR AL PRECIO DE COMPRA"<<endl;
                            }
                            else
                            cout << "INGRESE CANTIDAD EN EXISTENCIA: ";
                            cin >> existencia[i];
                        cout << "EL PRODUCTO HA SIDO REACTIVADO EXITOSAMENTE"<<endl;
                        system("pause");
                        Administrador();
                    }
                    case 2:
                        Administrador();
                    default: cout << "OPCION INVALIDA"<<endl;
                }
                if (opc < 3)
                    Administrador();
        } else
            cout << "EL PRODUCTO " << producto[pos] << " YA EXISTE"<<endl;
}

void Bajas() {
    int i;
    int pos;
    int opc;
    string nombre;
    system("cls");
    cout << "*********** B A J A S ***********"<<endl;
    while (true) {
        cout << "INGRESE PRODUCTO"<<endl;
        cin>>nombre;
        if (nombre == "*")
            break;
        pos = buscar(nombre);
        if (pos == -1)
            cout << "EL PRODUCTO: " << nombre << ", NO EXISTE"<<endl;
        else
            if (pos == -2)
            cout << "EL PRODUCTO: " << nombre << ", YA SE ENCUENTRA DADO DE BAJA"<<endl;
        else {
            i = pos;
            while (true) {
                cout << "SEGURO QUE DESEA DAR DE BAJA EL PRODUCTO: " << producto[i] <<endl;
                cout << "INGRESE 1: SI \n";
                cout << "INGRESE 2: NO \n";
                cin >> opc;
                switch (opc) {
                    case 1:
                    {
                        st[i] = 0;
                        cout << "EL PRODUCTO SE HA DADO DE BAJA EXITOSAMENTE"<<endl;
                        system("pause");
                        Administrador();
                    }
                    case 2:
                        break;
                    default: cout << "OPCION INVALIDA"<<endl;
                }
                if (opc < 3)
                    break;
            }
        }
    }
}

void Modificaciones() {
    int i;
    int opc;
    int pos;
    string nombre;
    system("cls");
    cout << "*********** M O D I F I C A C I O N E S ***********\n";
    	
        cout << "INGRESE EL PRODUCTO A MODIFICAR: ";
        cin>>nombre;
        pos = buscar(nombre);
        if (pos == -1)
            cout << "EL PRODUCTO: " << nombre << ", NO EXISTE\n";
        else
            if (pos == -2)
            cout << "EL PRODUCTO: " << nombre << ", ESTA DADO DE BAJA\n";
        else {
            i = pos;
          
            	system("cls");
                cout << "DESEA MODIFICAR EL PRODUCTO "<<nombre<<endl;
                cout << "1. PRECIO DE COMPRA\n";
                cout << "2. PRECIO DE VENTA\n";
                cout << "3. EXISTENCIAS\n";
                cout << "4. TODO\n";
                cout << "5. REGRESAR\n";
                cin>>opc;
                switch (opc) {
                    case 1:
                    {
                        cout << "EL PRECIO DE COMRPRA ACTUAL ES DE: " << preciocompra[i] << endl << "INGRESE EL NUEVO PRECIO DE COMPRA: ";
                        cin >> preciocompra[i];
                        cout << "EL PRECIO DE COMPRA HA SIDO MODIFICADO\n";
                     system("pause");  
                     Administrador();
                    }
                    case 2:
                    {
                        cout << "EL PRECIO DE VENTA ACTUAL ES DE: " << precioventa[i] << endl << "INGRESE EL NUEVO PRECIO DE VENTA:  ";
                        cin >> precioventa[i];
                        cout << "EL PRECIO DE VENTA HA SIDO MODIFICADO\n";
                    }
                        break;
                    case 3:
                    {
                        cout << "LA EXISTENCIA ACTUAL ES DE: " << existencia[i] << endl << "INGRESE EL NUEVO NUMERO DE EXISTENCIAS: ";
                        cin >> existencia[i];
                        cout << "LA EXISTENCIA HA SIDO MODIFICADA\n";
                    }
                        break;
                    case 4:
                    
                    {
                        cout << "DATOS ACTUALES:\n";
                        cout << setw(6) << "ID" << setw(12) << "PRODUCTO" << setw(6) << "PC" << setw(6) << "PV" << setw(14) << "EXISTENCIA"<<endl;
                        cout << setw(5) << id[i] << setw(12) << producto[i] << setw(7) << preciocompra[i] << setw(6) << precioventa[i] << setw(9) << existencia[i] << endl;
                        cout << "INGRESE LOS DATOS NUEVOS:\n";
                        cout << "PRECIO DE COMPRA: ";
                        cin >> preciocompra[i];
                        cout << "PRECIO DE VENTA: ";
                        cin >> precioventa[i];
                        cout << "EXISTENCIA: ";
                        cin >> existencia[i];
                        cout << "LOS DATOS HAN SIDO MODIFICADOS\n";
                    }
                        break;
                    case 5:
                    default: 
					cout << "OPCION INVALIDA\n";
                    system("pause");
                    Modificaciones();
                }
                //if (opc = 6)
                  //  cout<<"OPCION INVALIDA"<<endl;
                    
            
        }
    
}
	
void Inventario() {
    int i, j, k;
    int opc;
    string salir;
    string temp_prod;
    int temp_id, temp_pc, temp_pv, temp_exist, temp_nr, temp_st;
    system("cls");
	cout << "*********** I N V E N T A R I O ***********\n\n";
    
            k = total;
            for (i = 0; i < k - 1; i++)
                for (j = 0; j < (k - 1) - i; j++)
                    if (id[j] > id[j + 1]) {
                        temp_id = id[j + 1];
                        id[j + 1] = id[j];
                        id[j] = temp_id;
                        temp_prod = producto[j + 1];
                        producto[j + 1] = producto[j];
                        producto[j] = temp_prod;
                        temp_pc = preciocompra[j + 1];
                        preciocompra[j + 1] = preciocompra[j];
                        preciocompra[j] = temp_pc;
                        temp_pv = precioventa[j + 1];
                        precioventa[j + 1] = precioventa[j];
                        precioventa[j] = temp_pv;
                        temp_exist = existencia[j + 1];
                        existencia[j + 1] = existencia[j];
                        existencia[j] = temp_exist;
                        temp_st = st[j + 1];
                        st[j + 1] = st[j];
                        st[j] = temp_st;
                    }
            cout << setw(6) << " ID " << setw(12) << " PRODUCTO " << setw(6) << "P.C" << setw(6) << " P.VTA " << setw(14) << " EXISTENCIAS " << setw(6) <<endl;
            for (j = 0; j < k; j++) {
                if (st[j] == 1) {
                    cout << setw(5) << id[j] << setw(12) << producto[j] << setw(7) << preciocompra[j] << setw(6) << precioventa[j] << setw(9) << existencia[j] <<endl;
                    cout<<"*******************************************\n\n";
                }
            }
            system("pause");
                    Administrador();
        }
        
void Usuarios() {
    int opc;
    do {
    	system("cls");
        cout << "ADMINISTRADOR DE USUARIOS\n";
        cout << "1. ALTA DE USUARIOS\n";
        cout << "2. BAJA DE USUARIOS\n";
        cout << "3. CONSULTA DE USUARIOS\n";
        cout << "4. MODIFICACION DE USUARIOS\n";
        cout << "5. MOSTRAR USUARIOS\n";
        cout << "6. REGRESAR\n";
        cout << "OPCION: ";
        cin>>opc;
        switch (opc) {
            case 1: Altas_u();
                break;
            case 2: Bajas_u();
                break;
            case 3: Consultas_u();
                break;
            case 4: Modificaciones_u();
                break;
            case 5: Mostrar_u();
                break;
            case 6:
                break;
            default: cout << "OPCION INVALIDA\n";
        }
    } while (opc != 6);
}

void Altas_u() {
    int i;
    int pos;
    int opc;
    int pass1;
    int pass2;
    string usuario;
    cout << "*********** A L T A  D E  U S U A R I O S ***********\n";
    do {
        cout << "¿ EL USUARIO A DAR DE ALTA ES ADMINISTRADOR O VENDEDOR?"<<endl;
        cout << "1. ADMINISTRADOR\n";
        cout << "2. VENDEDOR\n";
        cout << "3. REGRESAR\n";
        cin>>opc;
        switch (opc) {
            case 1:
            {
                while (true) {
                    cout << "INGRESE USUARIO: ";
                    cin>>usuario;
                    if (usuario == "*")
                        break;
                    pos = buscar_a(usuario);
                    if (pos == -1) {
                        i = total_admin;
                        do {
                            cout << "INGRESE CONTRASEÑA DEL USUARIO" << usuario << ": ";
                            cin>>pass1;
                            cout << "CONFIRME LA CONTRASEÑA: ";
                            cin>>pass2;
                            if (pass1 == pass2) {
                                pass_a[i] = pass2;
                                break;
                            } else
                                cout << "LA CONTRASEÑA NO COINCIDE, INTENTE DE NUEVO\n";
                        } while (pass1 != pass2);
                        user_admin[i] = usuario;
                        st_admin[i] = 1;
                        cout << pass_a[i];
                        i++;
                        total_admin = i;
                        cout << " EL USUARIO HA SIDO DADO DE ALTA EXITOSAMENTE\n";
                    } else
                        if (pos == -2) {
                        i = i_ba;
                        while (true) {
                            cout << "EL USUARIO " << usuario << " ESTA DADO DE BAJA, ¿ DESEA REACTIVARLO?\n";
                            cout << "1. SI­\n";
                            cout << "2. NO\n";
                            cin >> opc;
                            switch (opc) {
                                case 1:
                                {
                                    do {
                                        cout << "INGRESE CONTRASEÑA DEL USUARIO " << usuario << ": ";
                                        cin>>pass1;
                                        cout << "CONFIRME LA CONTRASEÑA: ";
                                        cin>>pass2;
                                        if (pass1 == pass2) {
                                            pass_a[i] = pass2;
                                            break;
                                        } else
                                            cout << " LAS CONTRASEÑAS NO COINCIDEN, INTENTE DE NUEVO\n";
                                    } while (pass1 != pass2);
                                    st_admin[i] = 1;
                                    cout << "EL USUARIO HA SIDO REACTIVADO CON EXITO\n";
                                }
                                    break;
                                case 2:
                                    break;
                                default: cout << "OPCION INVALIDA\n";
                            }
                            if (opc < 3)
                                break;
                        }
                    } else
                        cout << "EL USUARIO " << user_admin[pos] << " YA EXISTE\n";
                }
            }
                break;
            case 2:
            {
                while (true) {
                    cout << "INGRESE USUARIO: ";
                    cin>>usuario;
                    if (usuario == "*")
                        break;
                    pos = buscar_v(usuario);
                    if (pos == -1) {
                        i = total_seller;
                        do {
                            cout << " INGRESE CONTRASEÑA DEL USUARIO " << usuario << ": ";
                            cin>>pass1;
                            cout << "CONFIRME LA CONTRASEÑA: ";
                            cin>>pass2;
                            if (pass1 == pass2) {
                                pass_v[i] = pass2;
                                break;
                            } else
                                cout << "LAS CONTRASEÑAS NO COINCIDEN, INTENTE DE NUEVO\n";
                        } while (pass1 != pass2);
                        user_seller[i] = usuario;
                        st_seller[i] = 1;
                        cout << pass_v[i];
                        i++;
                        total_seller = i;
                        cout << " EL USUARIO SE HA DADO DE ALTA EXITOSAMENTE\n";
                    } else
                        if (pos == -2) {
                        i = i_ba;
                        while (true) {
                            cout << "EL USUARIO " << usuario << " ESTA DADO DE BAJA, ¿ DESEA REACTIVARLO ?\n";
                            cout << "1. SI­\n";
                            cout << "2. NO\n";
                            cin >> opc;
                            switch (opc) {
                                case 1:
                                {
                                    do {
                                        cout << "INGRESE CONTRASEÑA DEL USUARIO " << usuario << ": ";
                                        cin>>pass1;
                                        cout << "CONFIRME LA CONTRASEÑA: ";
                                        cin>>pass2;
                                        if (pass1 == pass2) {
                                            pass_v[i] = pass2;
                                            break;
                                        } else
                                            cout << "LAS CONTRASELAS NO COINCIDEN, INTENTE DE NUEVO\n";
                                    } while (pass1 != pass2);
                                    st_seller[i] = 1;
                                    cout << " EL USUARIO HA SIDO REACTIVADO EXITOSAMENTE\n";
                                }
                                    break;
                                case 2:
                                    break;
                                default: cout << "OPCION INVALIDA\n";
                            }
                            if (opc < 3)
                                break;
                        }
                    } else
                        cout << "EL USUARIO " << user_seller[pos] << " YA EXISTE\n";
                }
            }
                break;
            case 3:
                break;
            default: cout << "OPCION INVALIDA\n";
        }
        break;
    } while (opc != 3);

}

void Bajas_u() {
    int i;
    int pos;
    int opc;
    string usuario;
    system("cls");
    cout << "*********** B A J A  D E  U S U A R I O S ***********\n";
    do {
        cout << " EL USUARIO A DAR DE BAJA ES ADMINISTRADOR O VENDEDOR?\n";
        cout << "1. ADMINISTRADOR\n";
        cout << "2. VENDEDOR\n";
        cout << "3. REGRESAR\n";
        cin>>opc;
        switch (opc) {
            case 1:
            {
                while (true) {
                    cout << "INGRESE USUARIO: ";
                    cin>>usuario;
                    if (usuario == "*")
                        break;
                    pos = buscar_a(usuario);
                    if (pos == -1)
                        cout << "EL USUARIO: " << usuario << ", NO EXISTE\n";
                    else
                        if (pos == -2)
                        cout << "EL USUARIO: " << usuario << ", ya estÃ¡ dado de baja\n";
                    else {
                        i = pos;
                        while (true) {
                            cout << "SEGURO QUE DESEA DAR DE BAJA AL USUARIO " << user_admin[i] << "?\n";
                            cout << "1. SI\n";
                            cout << "2. NO\n";
                            cin >> opc;
                            switch (opc) {
                                case 1:
                                {
                                    st_admin[i] = 0;
                                    cout << "EL USUARIO: SE HA DADO DE BAJA EXITOSAMENTE \n";
                                    system("pause");
                                    Administrador();
                                } 
                                case 2:
								system("pause");
								Administrador();
                                default: 
								cout << "OPCION INVALIDA\n";
                                system("pause");
                                Bajas_u();  
                            }
                            if (opc < 3)
                                break;
                        }
                    }
                }
            }
                break;
            case 2:
            {
                while (true) {
                    cout << "INGRESE NOMBRE DE USUARIO: ";
                    cin>>usuario;
                    if (usuario == "*")
                        break;
                    pos = buscar_v(usuario);
                    if (pos == -1)
                        cout << "EL USUARIO " << usuario << ", NO EXISTE\n";
                    else
                        if (pos == -2)
                        cout << "EL USUARIO " << usuario << ", YA SE ENCUENTRA INHABILIDADO\n";
                    else {
                        i = pos;
                        while (true) {
                            cout << "SEGURO QUE DESEA DAR DE BAJA AL USUARIO " << user_seller[i] << "?\n";
                            cout << "1. SI\n";
                            cout << "2. NO\n";
                            cin >> opc;
                            switch (opc) {
                                case 1:
                                {
                                    st_seller[i] = 0;
                                    cout << "EL USUARIO SE HA DADO DE BAJA CON EXITO\n";
                                    system("pause");
                                    Administrador();
                                }
                                case 2:
                                    system("pause");
                                    Administrador();
                                    
                                default: 
								cout << "OPCION INVALIDA\n";
                            }
                            if (opc < 3)
                                break;
                        }
                    }
                }
            }
                break;
            case 3:
                break;
            default: cout << "OPCION INVALIDA\n";
        }
        break;
    } while (opc != 3);
}

void Consultas_u() {
    int i;
    int pos;
    int opc;
    int pass1;
    int pass2;
    string usuario;
    cout << "*********** C O N S U L T A S  D E  U S U A R I O S ***********\n";
    do {
        cout << "¿EL USUARIO A DAR DE BAJA ES ADMINISTRADOR O VENDEDOR?\n";
        cout << "1. ADMINISTRADOR\n";
        cout << "2. VENDEDOR\n";
        cout << "3. REGRESAR\n";
        cin>>opc;
        switch (opc) {
            case 1:
            {
                while (true) {
                    cout << "INGRESE USUARIO: ";
                    cin>>usuario;
                    if (usuario == "*")
                        break;
                    pos = buscar_a(usuario);
                    if (pos == -1) {
                        i = total_admin;
                        while (true) {
                            cout << "EL USUARIO " << usuario << " NO EXISTE. ¿ DESEA DARLO DE ALTA?\n";
                            cout << "1. SI\n" << "2. NO\n";
                            cin >> opc;
                            switch (opc) {
                                case 1:
                                {
                                    do {
                                        cout << "INGRESE CONTRASEÑA DEL USUARIO " << usuario << ": ";
                                        cin>>pass1;
                                        cout << "CONFIRME LA CONTRASEÑA: ";
                                        cin>>pass2;
                                        if (pass1 == pass2) {
                                            pass_a[i] = pass2;
                                            break;
                                        } else
                                            cout << "LAS CONTRASEÑAS NO COINCIDEN, INTENTE DE NUEVO\n";
                                    } while (pass1 != pass2);
                                    user_admin[i] = usuario;
                                    st_admin[i] = 1;
                                    cout << pass_a[i];
                                    i++;
                                    total_admin = i;
                                    cout << "EL USUARIO HA SIDO DADO DE ATA EXITOSAMENTE\n";
                                }
                                    break;
                                case 2:
                                    break;
                                default: cout << "OPCION INVALIDA\n";
                            }
                            if (opc < 3)
                                break;
                        }
                    } else
                        if (pos == -2) {
                        i = i_ba;
                        while (true) {
                            cout << "EL USUARIO " << usuario << " ESTA DADO DE BAJA, ¿DESEA REACTIVARLO?\n";
                            cout << "1. SI\n";
                            cout << "2. NO\n";
                            cin >> opc;
                            switch (opc) {
                                case 1:
                                {
                                    do {
                                        cout << "INGRESE CONTRASEÑA DEL USUARIO " << usuario << ": ";
                                        cin>>pass1;
                                        cout << "CONFIRME LA CONTRASEÑA: ";
                                        cin>>pass2;
                                        if (pass1 == pass2) {
                                            pass_a[i] = pass2;
                                            break;
                                        } else
                                            cout << "LAS CONTRASEÑAS NO COINCIDEN, INTENTE DE NUEVO\n";
                                    } while (pass1 != pass2);
                                    st_admin[i] = 1;
                                    cout << pass_a[i];
                                    cout << "EL USUARIO HA SIDO REACTIVADO EXITOSAMENTE\n";
                                }
                                    break;
                                case 2:
                                    break;
                                default: cout << "OPCION INVALIDA\n";
                            }
                            if (opc < 3)
                                break;
                        }
                    } else {
                        i = pos;
                        cout << "INFORMACION DEL USUARIO: " << user_admin[i] << endl;
                        cout << setw(6) << "NOMBRE" << setw(14) << "CONTRASEÑA" << setw(8) << "TIPO" << endl;
                        cout << setw(5) << user_admin[i] << setw(10) << pass_a[i] << setw(20) << "ADMINISTRADOR" << endl;
                    }
                }
            }
                break;
            case 2:
            {
                while (true) {
                    cout << "INGRESE USUARIO: ";
                    cin>>usuario;
                    if (usuario == "*")
                        break;
                    pos = buscar_v(usuario);
                    if (pos == -1) {
                        i = total_seller;
                        while (true) {
                            cout << "EL USUARIO " << usuario << " NO EXISTE. ¿DESEA DARLO DE ALTA?\n";
                            cout << "1. SI\n" << "2. NO\n";
                            cin >> opc;
                            switch (opc) {
                                case 1:
                                {
                                    do {
                                        cout << "INGRESE CONTRASEÑA DEL USUARIO " << usuario << ": ";
                                        cin>>pass1;
                                        cout << "CONFIRME LA CONTRASEÑA: ";
                                        cin>>pass2;
                                        if (pass1 == pass2) {
                                            pass_v[i] = pass2;
                                            break;
                                        } else
                                            cout << "LAS CONTRASEÑAS NO COINCIDEN, INTENTE DE NUEVO\n";
                                    } while (pass1 != pass2);
                                    user_seller[i] = usuario;
                                    st_seller[i] = 1;
                                    cout << pass_v[i];
                                    i++;
                                    total_seller = i;
                                    cout << "EL USUARIO HA SIDO DADO DE ALTA EXITOSAMENTE\n";
                                }
                                    break;
                                case 2:
                                    break;
                                default: cout << "OPCION INVALIDA\n";
                            }
                            if (opc < 3)
                                break;
                        }
                    } else
                        if (pos == -2) {
                        i = i_ba;
                        while (true) {
                            cout << "EL USUARIO" << usuario << " ESTA DADO DE BAJA ¿ DESEA REACTIVARLO?\n";
                            cout << "1. SI\n";
                            cout << "2. NO\n";
                            cin >> opc;
                            switch (opc) {
                                case 1:
                                {
                                    do {
                                        cout << "INGRESE CONTRASEÑA DEL USUARIO" << usuario << ": ";
                                        cin>>pass1;
                                        cout << "CONFIRME LA CONTRASEÑA: ";
                                        cin>>pass2;
                                        if (pass1 == pass2) {
                                            pass_v[i] = pass2;
                                            break;
                                        } else
                                            cout << "LAS CONTRASEÑAS NO COINCIDEN, INTENTE DE NUEVO\n";
                                    } while (pass1 != pass2);
                                    st_seller[i] = 1;
                                    cout << pass_a[i];
                                    cout << "EL USUARIO HA SIDO REACTIVADO EXITOSAMENTE\n";
                                }
                                    break;
                                case 2:
                                    break;
                                default: cout << "OPCION INVALIDA\n";
                            }
                            if (opc < 3)
                                break;
                        }
                    } else {
                        i = pos;
                        cout << "INFORMACION DEL USUARIO: " << user_seller[i] << endl;
                        cout << setw(6) << "NOMBRE" << setw(14) << "CONTRASEÑA" << setw(8) << "TIPO" << endl;
                        cout << setw(5) << user_seller[i] << setw(10) << pass_v[i] << setw(20) << "VENDEDOR" << endl;
                    }
                }
            }
                break;
            case 3:
                break;
            default: cout << "OPCION INVALIDA\n";
        }
        break;
    } while (opc != 3);
}

void Modificaciones_u() {
    int i;
    int opc;
    int pos;
    string usuario;
    cout << "*********** M O D I F I C A C I O N  D E  U S U A R I O S ***********\n";
    do {
        cout << "¿EL USUARIO A DAR DE BAJA ES ADMINISTRADOR O VENDEDOR?\n";
        cout << "1. ADMINISTRADOR\n";
        cout << "2. VENDEDOR\n";
        cout << "3. REGRESAR\n";
        cin>>opc;
        switch (opc) {
            case 1:
            {
                while (true) {
                    cout << "INGRESE USUARIO A MODIFICAR: ";
                    cin>>usuario;
                    if (usuario == "*")
                        break;
                    pos = buscar_a(usuario);
                    if (pos == -1)
                        cout << "EL USUARIO: " << usuario << ", NO EXISTE\n";
                    else
                        if (pos == -2)
                        cout << "EL USUARIO: " << user_admin[pos] << ", ESTA DADO DE BAJA\n";
                    else {
                        i = pos;
                        while (true) {
                            cout << "¿ QUE DESEA MODIFICAR?\n";
                            cout << "1. NOMBRE DE USUARIO\n";
                            cout << "2. CONTRASEÑA\n";
                            cout << "3. REGRESAR\n";
                            cin>>opc;
                            switch (opc) {
                                case 1:
                                {
                                    cout << "EL NOMBRE ACTUAL ES: " << user_admin[i] << endl;
                                    cout << "INGRESE EL NUEVO NOMBRE DE USUARIO: ";
                                    cin >> user_admin[i];
                                    cout << "EL NOMBRE DEL USUARIO HA SIDO MODIFICADO\n";
                                }
                                    break;
                                case 2:
                                {
                                    cout << "LA CONTRASEÑA ACTUAL ES: " << pass_a[i] << endl;
                                    cout << "INGRESE LA NUEVA CONTRASEÑA PARA " << user_admin[i] << ": ";
                                    cin >> pass_a[i];
                                    cout << "LA CONTRASEÑA DEL USUARIO HA SIDO MODIFICADA\n";
                                }
                                    break;
                                case 3:
                                    break;
                                default: cout << "OPCION INVALIDA\n";
                            }
                            if (opc == 3)
                                break;
                        }
                    }
                }
            }
                break;
            case 2:
            {
                while (true) {
                    cout << "INGRESE USUARIO A MODIFICAR: ";
                    cin>>usuario;
                    if (usuario == "*")
                        break;
                    pos = buscar_v(usuario);
                    if (pos == -1)
                        cout << "EL USUARIO: " << usuario << ", NO EXISTE\n";
                    else
                        if (pos == -2)
                        cout << "EL USUARIO: " << user_seller[pos] << ", SE ENCUENTRA DADO DE BAJA\n";
                    else {
                        i = pos;
                        while (true) {
                            cout << "¿QUE DESEA MODIFICAR?\n";
                            cout << "1. NOMBRE DEL USUARIO\n";
                            cout << "2. CONTRASEÑA DEL USUARIO\n";
                            cout << "3. REGRESAR\n";
                            cin>>opc;
                            switch (opc) {
                                case 1:
                                {
                                    cout << "EL NOMBRE ACTUAL ES: " << user_seller[i] << endl;
                                    cout << "SOBREESCRIBA EL NOMBRE DEL USUARIO: ";
                                    cin >> user_seller[i];
                                    cout << "EL NOMBRE DEL USUARIO SE HA MODIFICADO\n";
                                }
                                    break;
                                case 2:
                                {
                                    cout << "LA CONTRASENA ACTUAL ES: " << pass_v[i] << endl;
                                    cout << "INGRESE LA NUEVA CONTRASENA DE  " << user_seller[i] << ": ";
                                    cin >> pass_v[i];
                                    cout << "LA CONTRASENA HA SIDO MODIFICADA\n";
                                }
                                    break;
                                case 3:
                                    break;
                                default: cout << "OPCION INVALIDA\n";
                            }
                            if (opc == 3)
                                break;
                        }
                    }
                }
            }
                break;
            case 3:
                break;
            default: cout << "OPCION INVALIDA\n";
        }
        break;
    } while (opc != 3);
}

void Mostrar_u() {
    int i;
    int opc;
    string salir;
    while (true) {
    	cout<<"******** I N F.  D E  U S U A R I O S  ********\n";
        cout<<"***********************************************\n\n";
        cout<<"*       1. MOSTRAR USUARIOS ADMINISTRADORES   *\n";
        cout<<"*       2. MOSTRAR USUARIOS VENDEDORES        *\n";
        cout<<"*       3. SALIR\n                            *\n";
        cout<<"***********************************************\n";
        cin>>opc;
        switch (opc) {
            case 1:
            {
                cout << "INFORMACION DE USUARIOS ADMINISTRADORES:\n";
                cout << setw(6) << "NOMBRE" << setw(14) << "CONTRASENA" << setw(8) << "TIPO" << endl;
                for (i = 0; i < total_admin; i++) {
                    if (st_seller[i] == 1)
                        cout << setw(5) << user_admin[i] << setw(10) << pass_a[i] << setw(20) << "ADMINISTRADOR" << endl;
                }
                while (true) {
                    cout << "Presione ''*'' para salir\n";
                    cin>>salir;
                    if (salir == "*")
                        break;
                }
            }
                break;
            case 2:
            {
                cout << "INFORMACION DE USUARIOS VENDEDORES\n";
                cout << setw(6) << "NOMBRE" << setw(14) << "CONSTRASENA" << setw(8) << "TIPO" << endl;
                for (i = 0; i < total_seller; i++) {
                    if (st_seller[i] == 1)
                        cout << setw(5) << user_seller[i] << setw(10) << pass_v[i] << setw(15) << "VENDEDOR" << endl;
                }
                while (true) {
                    cout << "Presione ''*'' para salir\n";
                    cin>>salir;
                    if (salir == "*")
                        break;
                }
            }
                break;
            case 3:
                break;
            default: cout << "OPCION INVALIDA";
        }
        break;
    }
}

void Ventas() {
    int i;
    int j;
    int k;
    int c = 0;
    int pos;
    int opc,opcion = 1;
    int cant;
    int subtotal[100] = {};
    int suma_subtotal;
    string nombre;
    int total_cliente[100] = {};
    system("cls");
    cout<<"*************************************\n";
    cout<<"*            V E N T A S            *\n";
    cout<<"*************************************\n";
        cout << "INGRESE NOMBRE DEL CLIENTE: ";
        cin >> cliente[c];
        suma_subtotal = 0;
       while (opcion==1)
       {    
            cout<<""<<endl;
			cout << "INGRESE PRODUCTO A VENDER: "<<endl;
            cout<<"*************************************"<<endl;
            cout<<"*                                   *"<<endl;
            cout<<"*                BLUSA              *"<<endl;
            cout<<"*              PANTALON             *"<<endl;
        	cout<<"*               CAMISA              *"<<endl;
            cout<<"*               FALDA               *"<<endl;
            cout<<"*             CALCETINES            *"<<endl;
            cout<<"*                                   *"<<endl;
            cout<<"*************************************"<<endl;
            cin>>nombre;
            pos = buscar(nombre);
            if (pos == -1)
                cout << "EL PRODUCTO " << nombre << " NO EXISTE\n";
            else
                if (pos == -2)
                cout << "EL PRODUCTO " << nombre << " ESTA DADO DE BAJA\n";
            else
                if (existencia[pos] < 1)
                cout << " NO HAY EXISTENCIA DIPONIBLE DE ESTE PRODUCTO\n";
            else {
                i = pos;
                cout << "INGRESE LA CANTIDAD: ";
                cin>>cant;
                if (cant > existencia[i]) {
                    do {
                        cout << "NO HAY " << cant << " PIEZAS DISPONIBLES, SOLO HAY " << existencia[i] << " PIEZAS DISPONIBLES"<<endl;
						cout<<" DESEA REALIZAR LA VENTA ?\n";
                        cout << "1. SI\n";
                        cout << "2. NO\n";
                        cin>>opc;
                        switch (opc) {
                            case 1:
                            {
                                subtotal[i] = existencia[i] * precioventa[i];
                                cantidad[i] = existencia[i] + cantidad[i];
                                existencia[i] = 0;
                            }
                                break;
                            case 2:
                                break;
                            default:
                                cout << "OPCION INVALIDA\n";
                        }
                    } while (opc > 2);
                } else {
                    subtotal[i] = cant * precioventa[i];
                    existencia[i] = existencia[i] - cant;
                    cantidad[i] = cant + cantidad[i];
                }
                subtotal_2[i] = subtotal[i] + subtotal_2[i];
                suma_subtotal = subtotal[i] + suma_subtotal;
                cout<<"DESEA VENDER OTRO PRODUCTO?"<<endl;
                cout<<"ESCRIBA UN NUMERO: 1=SI         2=NO "<<endl;
                cin>>opcion;
            }
    }
        total_cliente[c] = suma_subtotal;
        c++;
        check_sell = 1;
    
    for (j = 0; j != c; j++){
        total_vendedor[i_bv] = total_cliente[j] + total_vendedor[i_bv];
        egresos_vendedor[i_bv]=cantidad[i]*preciocompra[i];
    }
    cout << endl;
    system("cls");
    
    cout<<"VENDEDOR: " << user_seller[i_bv] << endl;
    cout << "PRODUCTO" << setw(10) << "CANTIDAD" << setw(16) << "PRECIO UNITARIO" << setw(10) << "SUBTOTAL\n";
    for (i = 0; i < total; i++)
        if (st[i] == 1 && cantidad[i] > 0)
            cout << setw(8) << producto[i] << setw(10) << cantidad[i] << setw(16) << precioventa[i] << setw(10) << subtotal_2[i] << endl;
    cout << setw(41) << "TOTAL: $" << total_vendedor[i_bv] << endl;
    cout<<"DESEA INGRESAR OTRO CLIENTE: "<<endl;
    cout<<"1 = SI / 2 = NO"<<endl;
    cout<<"INGRESE UN NUMERO"<<endl;
    cin>>opcion;
    if(opcion ==  1){
    system("pause");
    Ventas();
	}
    else if(opcion == 2){
    system("pause");
    main();
	}
    else{
    cout<<"OPCION INVALIDA"<<endl;
    system("pause");
    Ventas();
}
    
}
