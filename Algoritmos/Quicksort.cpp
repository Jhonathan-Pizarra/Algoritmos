#include <iostream>
#define Tamanio 10
#include <iomanip>
using namespace std;

void mostrarOrden(int [Tamanio], int);
void quickSort(int [Tamanio], int, int);
 
int main(){
	
	int numero;
	int array[Tamanio];
	cout<<"Numero de elementos del arreglo: ";
	cin>> numero;
	
	cout<<"Ingrese elementos del array"<<endl;
	for(int i = 0; i<numero; i++){
		cout<<"Ingrese ["<<i<<"] :";
		cin>>array[i];
	}
	
	cout<<"Elementos ingresados"<<endl;
	for(int i=0; i< numero; i++){
		cout<<array[i]<<" ";
	}
	
	quickSort(array, 0, numero-1);
	mostrarOrden(array, numero);
	
	
	
	
	return 0;
}

void mostrarOrden(int array[Tamanio], int numero){
	cout<<"Elementos del array ordenados QUICKSORT"<<endl;
	for(int i = 0; i< numero; i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
}



//Funcion para ordenar 
void quickSort(int array[Tamanio], int primero, int ultimo){
	int central;
	int i, j;
	int pivote;
	
	central = ((primero + ultimo)/2); //Posicion cetnal del arreglo
	pivote = array[central];
	i = primero;
	j = ultimo;
	
	do{
		
		while(array[i] < pivote) i++;
		while(array[j] > pivote) j--;
		if(i > j){
			int temp;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j--;
		}
		
		
	}while(i<=j);
	
	if(primero < j){
		quickSort(array, primero, j);
		
	}
	
	if(i < ultimo){
		quickSort(array, i, ultimo);
		
	}
	
	
}
