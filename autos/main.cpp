#include <iostream>//libreria principal para entradas y salidas
#include <windows.h>//libreria para usar system pause, color etc
#include <stdlib.h>//para control de procesos
#include <conio.h>

using namespace std;

void verliscar();
void mostauto();
int addcar();


struct autos{
    char marca1[50];
   char marca[50];
   char Modelo[50];
   int chasis;
   int placa;

}aut;

//funcion que pregunta al usuario la accion a realizar
void verliscar()
{
    int opcion;

    cout << "Desea ver la lista o agregar cliente? " << endl;

    cout << "\n1-Ver Lista   2-agregar cliente  3-Menu " << endl;
    cin>>opcion;

    switch (opcion)
    {
    case 1:
        mostauto();
        break;

    case 2:
        addcar();
        break;

    case 3:
        break;

    default:
        cout<<"La opcion no es valida elige una opcion: "<<endl;
        cin>>opcion;
        break;
    }
    }


//Funcion para agregar usuarios con ayuda de la estructura
int addcar()
{
    int casos;//variable que servira para el switch

    cout << "Ingrese Los Datos: " << endl;
    cin.getline(aut.marca1,50,'\n');//guarda en memoria los datos almacenados por el usuario

    cout << "\n Marca: " << endl;
    cin.getline(aut.marca,50,'\n');//guarda en memoria los datos almacenados por el usuario

    cout << "\nModelo: " << endl;
    cin.getline(aut.Modelo,50,'\n');//guarda en memoria los datos almacenados por el usuario

    cout << "\nNumero de Chasis: " << endl;
    cin>>aut.chasis;//guarda en memoria los datos almacenados por el usuario

    cout << "\nNumero de Placa: " << endl;
    cin>>aut.placa;//guarda en memoria los datos almacenados por el usuario

    system ("cls");//para limpiar pantalla

    cout<<"desea ver el auto agregado?"<<endl;//para dirigirse a otra pantalla
    cout <<"1-SI   2-No"<<endl;
    cin>>casos;

    switch (casos)
    {
    case 1:
        mostauto();
        break;

    case 2:
        break;


    default:
        cout<<"La opcion es invalida, cerrando sistema"<<endl;
    }

    return 0;
}
//funcion que muestra los clientes actuales
void mostauto()
{
    cout<<" "<<endl;

    cout<<"\nMarca: "<<aut.marca<<endl;

    cout<<"\nModelo: "<<aut.Modelo<<endl;

    cout<<"\nPlaca: "<<aut.placa<<endl;

    cout<<"\nChasis No: "<<aut.chasis<<endl;

    system("pause");

    system ("cls");

    //aqui va el menu


}


int main()
{
    addcar();
    return 0;
}
