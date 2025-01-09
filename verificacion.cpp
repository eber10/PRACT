/*crea un programa que valide si una tarjeta de credito es real o no, para ello use el algoritmo de luhn también 
conocido como "módulo 10". Este es un método matemático simple para verificar la validez de los números 
de tarjetas de crédito.

Pasos del algoritmo de Luhn:
*Invertir los dígitos: 
*Duplicar los dígitos en posiciones alternas:
*Sumar todos los dígitos:
*Validar el resultado: 
-----------------------------------------------------
Ejemplo práctico:
Supongamos el número de tarjeta: 4539 1488 0343 6467

Invertir los dígitos:
7 6 4 6 3 4 3 0 8 8 4 1 9 3 5 4

Duplicar dígitos en posiciones alternas (los de posición par):
Duplicamos:
7, 12, 4, 12, 3, 8, 3, 0, 8, 16, 4, 2, 9, 6, 5, 8
Convertimos números >10 en suma de dígitos:
7, 3, 4, 3, 3, 8, 3, 0, 8, 7, 4, 2, 9, 6, 5, 8

Sumar todos los dígitos:
7 + 3 + 4 + 3 + 3 + 8 + 3 + 0 + 8 + 7 + 4 + 2 + 9 + 6 + 5 + 8 = 80

Validar el resultado:
Como 80 es divisible entre 10, el número de tarjeta es válido según el algoritmo de Luhn.*/

#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    const int tam=16;
    long long numTarjeta, arr[tam], sum=0;
    cout<<"---------------------------------"<<endl;
    cout<<"SISTEMA DE VALIDACIÓN DE TARJETA "<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"INGRESE EL NÚMERO DE LA TARJETA: "; cin>>numTarjeta;
    long long InverNumTarjeta=0;
    while(numTarjeta>0)
    {
        InverNumTarjeta=((numTarjeta%10)+(InverNumTarjeta*10));
        numTarjeta=numTarjeta/10;
    }
    for(int i=tam; i>0; i--)
    {
        arr[i]=InverNumTarjeta%10;
        InverNumTarjeta=InverNumTarjeta/10;
    }
    for(int i=1; i<=tam; i++)
    {
        if(i%2==0)
        {
            arr[i]=arr[i]*2;
        }
        if(arr[i]>=10)
        {
            arr[i]=(arr[i]%10)+(arr[i]/10);
        }
        sum+=arr[i];
    }
    if(sum%10==0)
    {
        cout<<"tarjeta válida..."<<endl;
    }
    else
    {
        cout<<"tarjeta no válida...."<<endl;
    }
    return 0;
}