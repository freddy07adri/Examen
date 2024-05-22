#include <iostream>
#include "variables.h"

using namespace std;

/*
C - CREATE
R - READ
U - UPDATE
D - DELETE
*/

//CREATE
void addREg();
void addReg(){

cout << "Datos del estudiante\n" ;
cout <<"CIF: " ;
scanf ( "%[^\n]", people[pos].cif);
cout << "NOMBRES: ";
scanf (" %[^\n]", people[pos].lastName);
cout <<  " APELLIDOS:";
scanf ( "%[^\n]", people[pos]. lastName);
cout << "AÑO: ";
scanf ( "%d", & people[pos].year);

pos++;
}

void showReg();
void showReg(){
    for(int i =0; i < pos; i++){
        printf( "NOMBRES: %s %s \nAñoÑ %d"
        ,people[i]. name, people[i]. lastName
        , people[i]. year);
        cout << " ********************************\n";
    }
}
void menu(){
    int op=0;
    do{
        cout << "1.Agregar \n";
        cout << "2. Mostrar \n";
        cout << "3. Salir \n";
        cout << "opcion: ";
        cin >> op ;
        switch(op){
        
     Case 1:
        addReg();
        system( "pause");
        break;
    Case 2:
        showReg();
        system("pause") ;
        break;
        
    Case 3:
        break;
        default:


        }
    }
}