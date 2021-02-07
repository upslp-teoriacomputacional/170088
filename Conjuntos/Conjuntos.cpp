#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>

using namespace std;

int A[5]={1,2,3,4,5};
int B[5]={1,2,3,4,5};
int C[]={};

void pertenencia();
void transformarConj();
void quitar();
void ClearSet();
void copiar();
void agregar();
void Union();
void diferencia();
void simetrica();
void subconjunto ();
void superconjunto();

void EliminarElemento(int arr[], int *cantidad, int elem){
    int i;

    for(i= elem; i<*cantidad-1; i+=1){
        arr[i]= arr[i+1];
    }
    *cantidad-=1;
}

main(){
	pertenencia();
//	transformarConj();
//	quitar();
//	ClearSet();
//	agregar();
//	Union();
//	diferencia();
//	simetrica();
//	subconjunto ();
//	superconjunto();
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
	
}
//Interseccion
void agregar(){
	
}
//Diferencia
void Union(){
	
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
