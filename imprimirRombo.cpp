/*imprimir la siguiente figura
         *
        ***
       *****
      *******
     *********
      *******
       *****
        ***
         *
*/
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int n;
    cout<<"Ingrese el número de filas: "; cin>>n;
    int mitad=n/2;
    //superior
    for(int i=0; i<=mitad; i++)
    {
        //espacios
        for(int j=0; j<mitad-i; j++)
        {
            cout<<" ";
        }
        //*
        for(int j=0; j<2*i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //parte superior
    for(int i=mitad-1; i>=0; i--)
    {
        //espacio
        for(int j=0; j<mitad-i; j++)
        {
            cout<<" ";
        }
        //*
        for(int j=0; j<2*i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}