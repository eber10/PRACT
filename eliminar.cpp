/*Eliminar un valor de una lista.*/
#include<iostream>
using namespace std;
int main()
{
    int n, valor;
    cout<<"Ingrese la cantidad de elementos:"; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"arr["<<i<<"]="; cin>>arr[i];
    }
    cout<<"Ingrese el valor a eliminar: "; cin>>valor;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==valor)
        {
            for(int j=i+1; j<n; j++)
            {
                arr[j-1]=arr[j];
            }
            n--;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}