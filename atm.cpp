/*
Realizar un menu de caejro automatico que cuente con las opciones de 
1- Saldo inicial, si quere extraer mas de lo que esta en su casa 
2- Tenga un menu de extraccion, deposito, salir
3- Ver saldo
*/
#include "iostream"
using namespace std; 
int main(){
    float saldoInicial=1000,ingresoDinero,montoRetirar,saldoActual;
    int opc;
    do{ 

    cout<<"-----------------------------"<<endl;
    cout<<"Bienvenido a tu Banca Virtual"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Seleccione una opcion"<<endl;//el endl finalizar linea
    cout<<"1. Consultar saldo"<<endl;
    cout<<"2. Ingresar dinero"<<endl;
    cout<<"3. Retirar dinero"<<endl;
    cout<<"4. Salir"<<endl;
    cin>>opc;
    switch(opc){
        case 1:
            cout<<"-- Consulta de saldo --"<<endl;
            cout<<"Saldo actual: "<<saldoInicial<<endl;
            break;
        case2: 
            cout<<"-- Ingreso de dinero --"<<endl;
            cout<<"Ingrese el monto: "<<endl;
            cin>>ingresoDinero;
            saldoInicial=saldoInicial+ingresoDinero;
            break;
        case3: 
            cout<<"-- Retirar Dinero --"<<endl;
            cout<<"Ingrese el monto a retirar: "<<endl;
            cin>>montoRetirar;
            if(montoRetirar > saldoInicial) {
                cout<<"No tiene esa cantidad de dinero"<<endl;
            }else{
                saldoActual=saldoInicial-montoRetirar;
                cout<<"Saldo actual"<<saldoInicial<<endl;
            }
            cout<<endl;
            break;
        case4: 
        break;   
        default:
        cout<<"ALERTA: Opcion Incorrecta"<<endl;    
    }
    system("pause");
    system("cls");
    }while(opc<4);
    return 0;
}
