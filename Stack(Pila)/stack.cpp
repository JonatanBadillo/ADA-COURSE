#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> Pila1;
    Pila1.push(2);
    Pila1.push(8);
    Pila1.push(10);

    // La Pila1 tiene 2 elementos en este momento:
    // 10(top),8,2
    cout<< "El elemento en la cima de la Pila1 es " << Pila1.top() << endl; // El top de la Pila1 es el 10

    //Elimino el top de la Pila1
    Pila1.pop();
     cout<< "El elemento en la cima de la Pila1 es " << Pila1.top() << endl;// El top de la Pila1 es el 8

     //Elimino el top de la Pila1
    Pila1.pop();
    cout<< "El elemento en la cima de la Pila1 es " << Pila1.top() << endl;// El top de la Pila1 es el 2


    // Creamos nueva pila
    stack<int> Pila2;
    for(int i=1;i<=10;i++){
        Pila2.push(i);// La pila esta conformada por: 1,2,3,4,5,6,7,8,9,10
    }

    // Para saber el numero de elementos de la pila
    cout<<"El numero de elementos en la pila2 es: " << Pila2.size()<<endl;

    cout<<"Los elementos de la pila son: \n";
    while (not Pila2.empty()){
        cout<<Pila2.top()<<" ";
        Pila2.pop(); // elimino elementos del top de la pila
    }
    cout<<endl;

}