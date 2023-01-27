#include "iostream"
#include "string"
using namespace std;

int main(){ 
    int opc;//opcion para la calculadora 
    int valor1, valor2, resultado;
    cout<<"###Calculadora Basica en C##\n";
    cout<<"1-Suma\n2-Resta\n3-Mult\n4-Div\n";
    cout<<"Elige opc:";
    cin>>opc;
switch(opc){
    case 1:
        cout<<"Ingrese numero a sumar";
        cin>>valor1;
        cout<<"Ingrese otro numero"; 
        cin>>valor2;
        resultado=valor1+valor2;
        cout<<"El resultado de la suma es:"<<resultado;
        break;
    case 2:
        cout<<"Ingrese numero a restar:"; 
        cin>>valor1; 
        cout<<"Ingrese otro numero:"; 
        cin>>valor2;
        resultado=valor1-valor2;
        cout<<"El resultado de la resta es:"<<resultado;
        break;
    case 3:
        cout<<"Ingrese numero a multiplicar:"; 
        cin>>valor1; 
        cout<<"Ingrese otro numero:"; 
        cin>>valor2;
        resultado=valor1*valor2;
        cout<<"El resultado de la multiplicacion es:"<<resultado;
        break;
    case 4:
        cout<<"Ingrese numero a div:"; 
        cin>>valor1; 
        cout<<"Ingrese otro numero:"; 
        cin>>valor2;
        resultado=valor1/valor2;
        cout<<"El resultado de la div es:"<<resultado;
        break;
        default:
            cout<<"Opc. no valida";
    }
    return 0;
}