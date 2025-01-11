/*se tiene los siguientes  atributos de un artículo: código, descripción, precio, cantidad. 
Ordene un conjunto de artículos descendentemente según el monto de inversión(el monto de inversión 
se calcula multiplicando el precio de cada artículo por la cantidad de artículos). 
use ordenación por intercambio directo por la derecha.*/
#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
struct Articulo
{
    string codigo;
    string descripcion;
    double precio;
    int cantidad; 

};
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int n;
    cout<<"Ingrese la cantidad de artículos: "; cin>>n;
    Articulo art[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Código: "; cin>>art[i].codigo;
        cout<<"Descripción: "; cin>>art[i].descripcion;
        cout<<"Precio: "; cin>>art[i].precio;
        cout<<"Cantidad: "; cin>>art[i].cantidad;
        cout<<"----------------------"<<endl;
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if((art[i].precio*art[i].cantidad)<(art[j].precio*art[j].cantidad))
            {
                Articulo aux=art[i];
                art[i]=art[j];
                art[j]=aux;
            }
        }
    }
    cout<<"Artículos ordenados descendentemente según el monto de inversión "<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<art[i].codigo<<"\t"
        <<art[i].descripcion<<"\t"
        <<art[i].precio<<"\t"
        <<art[i].cantidad<<endl;
    }
    return 0;
}
