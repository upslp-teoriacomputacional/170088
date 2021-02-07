
/******************************************************************************
Practica 1
Programa para mostrar las difentes operaciones con arreglos como en matematicas
Lenguaje C++
Alumno: Isai Adriel Dominguez Garcia 
Matricula: 170088
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <list> 
#include <iterator> 
#include <vector>
#include <iostream>

using namespace std;
//Vectores
list <int> A,B;
list <char> C;

void showlist(list <int> g) 
{ 
    list <int> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 
void showlist(list <char> g) 
{ 
    list <char> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 

bool findList(list <int> g,int number) { 

    list <int> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it){
    	 if(*it == number){
    	 	return true;
			 break;
    	 }
    } 
    return false;
} 

void addArray(int Array[],list <int> li){
	for (int i = 0; i < sizeof(Array); ++i) 
    { 
        li.push_front(Array[i]); 
    } 
}

void addArray(char Array[],list <char> li){
	for (int i = 0; i < sizeof(Array); ++i) 
    { 
        li.push_front(Array[i]); 
    } 
}

int main(){
	int a[5] = {1,2,3,4,5};
	int b[5] = {1,2,3,4,5};
	char c[] = {};
	
	addArray(a,A);
	addArray(b,B);
	addArray(c,C);
	
	return 0;
} 
// Pertenencia
void pertenencia(){
	int Aux[5] = {1,2,3,4,5};
	int n;
	A.clear();
	addArray(Aux,A);
	
	n = 1;
	
	if(findList(A,n) != true) printf("A Contiene %d\n",n);
	else printf("A no contiene %d\n",n);
	
	if(findList(A,n) == true) printf("A no Contiene %d\n",n);
	else printf("A contiene %d\n",n);
	
	n = 10;
	
	if(findList(A,n) != true) printf("A Contiene %d\n",n);
	else printf("A no contiene %d\n",n);
	
	if(findList(A,n) == true) printf("A no Contiene %d\n",n);
	else printf("A contiene %d\n",n);
}
//Transformar Conjunto
void transformarConj(){
	A.clear();
	int Aux[3] = {1,2,3};
	addArray(Aux,A);
	
	showlist(A);
	
	B.clear();
	int AuxB[5] = {1,2,3,4,5};
	addArray(AuxB,B);
	showlist(B);
	
	char AuxC[15] = {"Hola mundo"};
	addArray(AuxC,C);
	
	showlist(C);
}
//Quitar
void quitar(){
	A.clear();
	int Aux[6] = {0,1,2,3,4,5};
	addArray(Aux,A);
	
	A.remove(3);
	
	showlist(A);
}
//ClearSet
void ClearSet(){
	A.clear();
	showlist(A);
}
//Copiar
void copiar(){
	B.clear();
	B.merge(A);
	showlist(B);
}
//Interseccion
void agregar(){
	B.push_back(987);
	showlist(B);
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

/*Nota: Este metodo es ineficiente por lo que cambiare
  El como esta programado.
*/
