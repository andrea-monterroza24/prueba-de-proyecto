#include<iostream>
#include "mostrarAyuda.hpp"
#include "mostrarIntegrantes.hpp"


using namespace std;
int main(){
   
   int opt;

  cout <<"Bienvenido al juego El Ahorcado"<<endl;
  
  

do
{
    cout << "Menu:" << endl;
    cout<<"1-Jugar"<< endl;
    cout<<"2-Jugadores"<<endl;
    cout<<"3-Mostrar ganadores"<<endl;
    cout<<"4-Ayuda"<<endl;
    cout<<"5-Mostrar integrantes"<<endl;
    cout<<"6-Salir"<<endl;
    cout<<"Elige una opcion: ";
    cin>>opt;


switch (opt)
{
 case 1:
    cout<<"Jugar"<<endl;  
    break;

    case 2:
    cout <<"Mostrarjugadores"<<endl;
    break;

    case 3:
       cout<<"Bmostraganadores"<<endl;
      
       case 4:
       cout<<"Bienvenido a la opcion de Ayuda."<<endl;
       mostrarAyuda();
       break;

       case 5:
       cout<<"las creadoras de esta version de el juego El Ahorcado son:"<<endl;
       mostrarIntegrantes();
       break;
       
       case 6: 
       cout<<"Adios"<<endl;
       break;

    default:
    cout<<"Opcion no valida"<<endl;
    break;

}
}while (opt != 6);

 
 
 
 return 0;
}