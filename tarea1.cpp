#include <iostream>
using namespace std;
int main (){
char letra;
cout << "Escoge una letra de las siguientes: \n R\n Y\n B\n W\n K\n C\n G\n Ingrese opcion: "; cin >> letra;
 switch (letra){

    case 'R':
    cout <<"Usted selecciono Rojo "; break;
    case 'Y':
    cout <<"Usted selecciono Amarillo "; break;
    case 'B':
    cout <<"Usted selecciono Azul "; break;
    case 'W':
    cout <<"Usted selecciono Blanco "; break;
    case 'K':
    cout <<"Usted selecciono Negro "; break;
    case 'C': 
    cout <<"Usted selecciono Cian "; break;
    case 'G':
    cout <<"Usted selecciono Verde "; break;
    default:
    cout << "Opcion invalida ";
 }

    return 0;
}