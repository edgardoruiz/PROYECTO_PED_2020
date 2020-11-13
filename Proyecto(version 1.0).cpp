#include<iostream>
#include<queue>
#include<string>

using namespace std;

struct tipoCliente{
  string nombre;
  string numCliente;
  string estadoCuenta;
};

typedef struct tipoCliente Cliente;

void agregarCliente();
void eliminarCliente();

 queue<Cliente> pila;

int main(){
   
    int opcion;
    cout<<"1-Agregar un cliente a la cola"<<endl;
    cout<<"2-Eliminar cliente"<<endl;
    cin>>opcion; cin.ignore();
    
    switch(opcion){
        case 1: agregarCliente();
        case 2: eliminarCliente();
        default: 
            cout<<"Opcion invalida"<<endl;
    }
    return 0;
}

void agregarCliente(){
    Cliente cliente;
    cout<<"Ingresar nombre del cliente"; getline(cin, cliente.nombre);
    cout<<"Ingresar numero del cliente"; getline(cin, cliente.numCliente);
    cout<<"Ingrese el estado de cuenta del cliente"; getline(cin, cliente.estadoCuenta);
    cin.ignore();
    pila.push(cliente);
}

void eliminarCliente(){
    while(!pila.empty()){
        pila.pop();
    }
}
