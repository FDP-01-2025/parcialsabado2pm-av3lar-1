#include <iostream>
using namespace std;

int main ( ) {

int DiaSemana;
cout<<"que dia de la semana deseas escoger?"<< endl;
cout<<"1.Lunes"<<endl;
cout<<"2.Martes"<<endl;
cout<<"3.Miercoles"<<endl;
cout<<"4.Jueves"<<endl;
cout<<"5.Viernes"<<endl;
cout<<"6.Sabado"<<endl;
cout<<"7.Domingo"<<endl;
cin>>DiaSemana;

switch(DiaSemana){
    case 1:
    cout<<"es dia de semana";
    break;
    case 2:
    cout<<"es dia de semana";
    break;
    case 3:
    cout<<"es dia de semana";
    break;
    case 4:
    cout<<"es dia de semana";
    break;
    case 5:
    cout<<"es dia de semana";
    break;
    case 6:
    cout<<"es fin de semana";
    break;
    case 7:
    cout<<"es fin de semana";
    break;
default:
cout<<"Ese dia no existe";
    break;


}



    return 0;
}