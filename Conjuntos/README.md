Programa realizado en un proyecto de C en el editor Dev-C++
Nombre: Isai Adriel Dominguez Garcia
Matricula: 170088
Universidad politecnica de San luis Potosi
profesor: Juan Carlos Gonzales Ibarra
Descripcion: Programa que realiza operaciones en conjuntos

¿Que se hizo para llegar a la solucion?

Se opto por el uso de vectores para realizar las operacions ya que el uso de arrays
resulta complicar el proceso

Codigo
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>

using namespace std;
//Arrays
int A[5]={1,2,3,4,5};
int B[5]={1,2,3,4,5};
int C[]={};

//Funcion de eliminacion
void EliminarElemento(int arr[], int *cantidad, int elem){
    int i;

    for(i= elem; i<*cantidad-1; i+=1){
        arr[i]= arr[i+1];
    }
    *cantidad-=1;
}
//Funcion para recorrer un arreglo
void imprimirArreglo(int arr[]){
	for(int i=0;i<sizeof(arr);i++){
		printf("A[%d] = %d",i,arr[i]);
	}
}

main(){

} 
// Pertenencia
void pertenencia(){
	int Aux[5] = {1,2,3,4,5};
	int n;
	copy(Aux,Aux+5,A);
	
	n = 1;
	
	if(find(A,A+5,n) != A+5) printf("A Contiene %d\n",n);
	else printf("A no contiene %d\n",n);
	
	if(find(A,A+5,n) == A+5) printf("A no Contiene %d\n",n);
	else printf("A contiene %d\n",n);
	
	n = 10;
	
	if(find(A,A+5,n) != A+5) printf("A Contiene %d\n",n);
	else printf("A no contiene %d\n",n);
	
	if(find(A,A+5,n) == A+5) printf("A no Contiene %d\n",n);
	else printf("A contiene %d\n",n);
}
//Transformar Conjunto
void transformarConj(){
	int Aux[5];
	
	
	
}
//Quitar
void quitar(){
	int pos;
	printf("\n Ingrese la posicion a eliminar");
 	scanf("%d",&pos);
 	int eliminado=A[pos];
 	for(int i=0;i<sizeof(A);i++){
	  	if(i==pos){
	  	 while(i<sizeof(A)-1){
	   		 A[i]=A[i+1];
	  	  i++;
	  	 }
	  	 break;
		}
	 }
}
//ClearSet
void ClearSet(){
	
}
//Copiar
void copiar(){
	int Aux[5] = {1,2,3,4,5};
	copy(Aux,Aux+5,A);
	
	copy(A,A+5,B);
	imprimirArreglo(B);
}
//Interseccion
void agregar(){
	
}
//Diferencia
void Union(){
	int Aux[sizeof(A)+sizeof(B)];
	copy(A,A+5,Aux);
	copy(B+sizeof(A),B+5,Aux);
	imprimirArreglo
}
//Simetrica
void diferencia(){
	
}
//Simetrica
void simetrica(){
	
}
//Subconjuntos
void subconjunto (){
	
}

//Superconjuntos
void superconjunto(){
	
}

/*Nota: Este metodo es ineficiente por lo que cambiare
  El como esta programado.
*/