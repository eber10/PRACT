/*Escribe una función que cuente cuántas vocales (a,e,i,o,u) hay en una palabra o frase*/
#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
int main()
{
    string palabra;
    int cont=0;
    cout<<"Ingrese una palabra o frase: "; getline(cin,palabra);
    for(char c:palabra)
    {
        if(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u')
        {
            cont++;
        }
    }
    cout<<cont<<endl;
    return 0;
}
/*#Escribe una función que cuente cuántas vocales (a,e,i,o,u) hay en una palabra o frase.
palabra=input("Ingrese una palabra o frase: ")
cont=0
vocales="aeiou"
for c in palabra.lower():
    if c in vocales:
        cont+=1

print(cont)    
*/