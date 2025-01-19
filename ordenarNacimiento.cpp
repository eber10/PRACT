/*Se tiene los siguientes atrubutos de personal: DNI, nombres, día, mes y año de nacimiento.
se pide ordenar por fecha de nacimiento. Sugerencia: use dos registros (uno para personal y otro para fecha)
y dos funciones (una para  la ordenación por selección directa y otra para la comparación de dos fechas)*/

#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
struct Fecha
{
    int dia;
    int mes;
    int anio;
};
struct Personal
{
    string Dni;
    string nombre;
    Fecha nacimiento;
};
bool compararFechas(Fecha f1, Fecha f2)
{
    if(f1.anio!=f2.anio)
    {
        return f1.anio<f2.anio;
    }
    if(f1.mes!=f2.mes)
    {
        return f1.mes<f2.mes;
    }
    return f1.dia<f2.dia;
}
void ordenar(Personal arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int menor=i;
        for(int j=i+1; j<n; j++)
        {
            if(compararFechas(arr[j].nacimiento,arr[menor].nacimiento))
            {
                menor=j;
            }
        }
        if(i!=menor)
        {
            Personal aux=arr[i];
            arr[i]=arr[menor];
            arr[menor]=aux;
        }
    }

}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    Personal per[]={{"82730183", "eduardo", {7,10,2000}},
                    {"71037203", "luis", {4,7,2001}},
                    {"40281972", "marcos", {7,12,2000}},
                    {"71028437", "noelia",{5,11,2004}},
                    {"61037293", "mario", {9,1,1965}},
                    {"61047293", "camilo", {28,7,2001}}
                    };
    const int n=6;
    ordenar(per,n);
    cout<<"lista de personas ordenadas según el año de su nacimiento"<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<per[i].Dni<<"\t"<<per[i].nombre<<"\t"
        <<per[i].nacimiento.dia<<"/"
        <<per[i].nacimiento.mes<<"/"
        <<per[i].nacimiento.anio<<endl;
    }

    return 0;
}