#include <iostream>//libreria principal para entradas y salidas
#include <windows.h>//libreria para usar system pause, color etc
#include <stdlib.h>//para control de procesos
#include <conio.h>


using namespace std;

int renta();
int sedanes();
int camionetas();
int todoterreno();
int coste(int opcion);
int lancer();
int corolla();
int hilux();
int ford();
int modecar();
void clean();
void mostclientes();
int addcliente();
int Menu();

struct clientes{
   char nombre[50];
   char apellido[50];
   int dui;
   int celu;

}cliente;

void verlis()
{
    int opcion;

    cout << "Desea ver la lista o agregar cliente? " << endl;

    cout << "\n1-Ver Lista   2-agregar cliente  3-Menu " << endl;
    cin>>opcion;

    switch (opcion)
    {
    case 1:
        mostclientes();
        break;

    case 2:
        addcliente();
        break;

    case 3:
        Menu();
        break;

    default:
        cout<<"La opcion no es valida elige una opcion: "<<endl;
        cin>>opcion;
        break;
    }
    }



int addcliente()
{
    int casos;
    cout << "Ingrese Los Datos: " << endl;
    cin.getline(cliente.nombre,50,'\n');

    cout << "\nIngrese el Nombre Completo: " << endl;
    cin.getline(cliente.apellido,50,'\n');

    cout << "\nIngrese El numero de Dui: " << endl;
    cin>>cliente.dui;

    cout << "\nIngrese el numero de celular: " << endl;
    cin>>cliente.celu;

    system ("cls");

    cout<<"desea ver el cliente agregado?"<<endl;
    cout <<"1-SI   2-No"<<endl;
    cin>>casos;

    switch (casos)
    {
    case 1:
        mostclientes();
        break;

    case 2:
        Menu();
        break;


    default:
        cout<<"La opcion es invalida, cerrando sistema"<<endl;
    }


}

void mostclientes()
{
    cout<<"\nNombre: Jose Mauricio Cruz "<<endl;

    cout<<"\nDui: 5443454647-1 "<<endl;

    cout<<"\nNumero de contacto: 5465-6475 "<<endl;

    cout<<"\nNombre: Elvin Astulfo Diaz "<<endl;

    cout<<"\nDui: 4323124647-2 "<<endl;

    cout<<"\nNumero de contacto: 7543-2353 "<<endl;

    cout<<"\nNombre: "<<cliente.nombre<<endl;

    cout<<"\nDui: "<<cliente.dui<<endl;

    cout<<"\nNumero de contacto: "<<cliente.celu<<endl;

    system("pause");

    clean();

    Menu();


}

 int renta()// funcion de menu de renta de autos segun su tipo
 {
 int opcion;

  cout <<"Que tipo de autos quisiera rentar"<<endl;
  cout <<"Sedan 1"<<endl;
  cout <<"Camioneta 2"<<endl;
  cout <<"Todo Terreno 3"<<endl;
  cout <<"salir 4"<<endl;
  cout <<"Seleccione una opcion:\n "<<endl;
  cin>>opcion;
  clean();

      switch (opcion)
      {
      case 1:
        clean();
        sedanes();

      case 2:
          clean();
        todoterreno();
        clean();
        break;

      case 3:
        clean();
        camionetas();
        break;

      case 4:
          cout<<"***********************************************"<<endl;
          cout<<"**     GRACIAS POR UTILIZAR PREFERIRNOS      **"<<endl;
          cout<<"***********************************************"<<endl;
          break;

      default:
        cout<<"La opcion no esta disponible"<<endl;



      }


 }



int Menu()
{
    int opciones;

    cout<<"Si desea rentar un auto presine 1"<<endl;
    cout<<"\nSi desea Agregar un auto Presione 2"<<endl;
    cout<<"\nPara ver o agregar clientes presione 3"<<endl;
    cout<<"\npara salir presione 4"<<endl;
    cin>>opciones;
    clean();

    switch(opciones)
    {
    case 1:
    clean();
	modecar();

	break;

	case 2:
    cout<<"Por el momento el servidor esta lleno, intenta mas tarde"<<endl;
    system ("pause");
    clean();
    cout<<"selecciona una opcion:\n "<<endl;
    Menu();
	break;

	case 3:
	verlis();
	break;

	case 4:
	    cout<<"***********************************************"<<endl;
        cout<<"**     GRACIAS POR UTILIZAR Y PREFERIRNOS    **"<<endl;
        cout<<"***********************************************"<<endl;
        system ("pause");
        break;

default:
	cout<<"Elige una opcion valida: "<<endl;
	Menu();

	break;

	return 0;

	system ("pause");
	clean();



    }



}


int main()
{

    system("color 5E");

    cout<<"                          ***********************************************"<<endl;
    cout<<"                          ****   BIENVENIDOS A RENT A CAR PORTILLO  ****"<<endl;
    cout<<"                          ***********************************************"<<endl;

    system ("pause");
    clean();

    Menu();


    return 0;
}

int sedanes()
{
    int opcion;

    cout <<"los Sedanes disponibles son"<<endl;
    cout <<"1 - Mitsubushi Lancer 2018"<<endl;
    cout <<"2 - Toyota Corolla 2018"<<endl;
    cout <<"3 - Volver a tipos de autos"<<endl;
    cout <<"Seleccione una opcion: "<<endl;
    cin>>opcion;
    clean();

    switch (opcion)
    {
    case 1:
        clean();
        lancer();
        break;

    case 2:
        clean();
        corolla();
        break;

    case 3:
        clean();
        renta();
        break;

    default:
        cout <<"Eliga una opcion valida"<<endl;
        sedanes();
        clean();
        break;


    }

}

int todoterreno()
{
    int opcion;

    cout <<"los todo terreno disponibles son"<<endl;

    cout <<"1 - Hilux 2018"<<endl;

    cout <<"2 - Volver a tipos de autos"<<endl;

    cout<<"Seleccione una opcion: "<<endl;
    cin>>opcion;
    clean();

    switch (opcion)
    {
    case 1:
        clean();
        hilux();
        break;

    case 2:
        clean();
        renta();
        break;

    default:
        cout <<"Eliga una opcion valida"<<endl;
        todoterreno();
        clean();
        break;



    }

}

int camionetas()
{
    int opcion;

    cout <<"las camionetas disponibles son"<<endl;

    cout <<"1 - ford Scape 2018"<<endl;

    cout <<"2 - Volver a tipos de autos"<<endl;

    cout <<"Eliga una opcion: "<<endl;

    cin>>opcion;



    switch (opcion)
    {
    case 1:
        ford();
        break;

    case 2:
        renta();
        break;

    default:
        cout <<"Eliga una opcion valida"<<endl;
        camionetas();
        clean();
        break;



    }

}



int corolla()
{
   int opcion;
   int dias;

    cout <<"MARCA: Toyota"<<endl;

    cout <<"MODELO: Corolla 2018"<<endl;

    cout <<"COSTO POR DIA: $60.00"<<endl;

    system ("pause");
    system ("corolla.bmp");
    clean();

    cout <<"Rentar este auto Si:1  NO:2(vuelve al menu)"<<endl;

    cin>>opcion;

    switch(opcion)
    {
    case 1:
        clean();
        cout<<"Ingrese el numero de Dias a Rentar: "<<endl;
        cin>>dias;

        cout<<"El Coste por renta es de: $"<<dias*60<<".00"<<endl;
        break;

    case 2:
        clean();
        renta();
        break;



    default:
        clean();
        cout <<"Seleccione una opcion valida"<<endl;
        corolla();
        clean();
        break;

    }




}

int hilux()
{
   int opcion;
   int dias;

    cout <<"MARCA: Toyota"<<endl;

    cout <<"MODELO: Hilux 2018"<<endl;

    cout <<"COSTO POR DIA: $80.00"<<endl;

    system ("pause");
    system ("hilux.bmp");
    clean();

    cout <<"Rentar este auto Si:1  NO:2(vuelve al menu)"<<endl;

    cin>>opcion;

    switch(opcion)
    {
    case 1:
        cout<<"Ingrese el numero de Dias a Rentar: "<<endl;
        cin>>dias;
        system ("cls");

        cout<<"El Coste por renta es de: $"<<dias*80<<".00"<<endl;
        break;


    case 2:
        renta();
        break;

    default:
        cout <<"Seleccione una opcion valida"<<endl;
        hilux();
        clean();
        break;

    }



}

int lancer()
{
   int opcion;
   int dias;

    cout <<"MARCA: Mitsubishi"<<endl;

    cout <<"MODELO: Lancer 2018"<<endl;

    cout <<"COSTO POR DIA: $60.00\n"<<endl;

    system ("pause");
    system ("lancer.bmp");
    clean();

    cout <<"Rentar este auto Si:1  NO:2(vuelve al menu)"<<endl;

    cin>>opcion;

    switch(opcion)
    {
    case 1:
        cout<<"Ingrese el numero de Dias a Rentar: "<<endl;
        cin>>dias;
        system ("cls");

        cout<<"El Coste por renta es de: $"<<dias*60<<".00"<<endl;
        break;

    case 2:
        renta();
        break;

    default:
        cout <<"Seleccione una opcion valida"<<endl;
        lancer();
        clean();
        break;

    }



}

int ford()
{
   int opcion;
   int dias;

    cout <<"MARCA: Ford"<<endl;

    cout <<"MODELO: Scape 2018"<<endl;

    cout <<"COSTO POR DIA: $80.00"<<endl;

    system ("pause");
    system ("ford.bmp");
    clean();

    cout <<"Rentar este auto Si:1  NO:2(vuelve al menu): "<<endl;

    cin>>opcion;

    switch(opcion)
    {
    case 1:
        cout<<"Ingrese el numero de Dias a Rentar: "<<endl;
        cin>>dias;
        system ("cls");

        cout<<"El Coste por renta es de: $"<<dias*80<<".00"<<endl;
        break;


    case 2:
        renta();
        break;

    default:
        cout <<"Seleccione una opcion valida"<<endl;
        ford();
        clean();
        break;

    }



}



int modecar()
{
	int opcion;

	cout<<"Los tipos de Vehiculos Disponibles son: "<<endl;

	cout<<"1 - Sedanes\n2 - Todo Terreno\n3 - Caminonetas \n4 - Salir"<<endl;

	cout<<"Eliga una opcion: "<<endl;

	cin>>opcion;

	switch (opcion)
	{
    case 1:
        sedanes();
        break;

    case 2:
        todoterreno();
        break;

    case 3:
        camionetas();
        break;

        case 4:
        cout<<"***********************************************"<<endl;
        cout<<"**     GRACIAS POR UTILIZAR Y PREFERIRNOS    **"<<endl;
        cout<<"***********************************************"<<endl;
        break;

        default:
        cout<<"Eliga una opcion valida"<<endl;
        modecar();
        clean();
        break;
	}







}

void clean()
{

    system ("cls");

}



