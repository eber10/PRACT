/*imprimir la siguiente figura
      *
      **
      ***
      ****
      *****
      ****
      ***
      **
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
    for(int i=0; i<=mitad; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=mitad-1; i>=0; i--)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}