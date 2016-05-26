/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Maureen
 *
 * Created on May 17, 2016, 10:04 PM
 */

#include <cstdlib>
#include <iostream>
#include "Arbol.h"
using namespace std;


Arbol *arbin = new Arbol();

/*                        Menu de opciones principal
------------------------------------------------------------------------*/
void menuPrincipal()
{
	cout << "\n\t Old Trees of Yore \n\n";
        
	cout << " 1. Insertar                              " << endl;
	cout << " 2. Es Vacio?                             " << endl;
	cout << " 3. Es Hoja?                              " << endl;
	cout << " 4. Peso                                  " << endl;
	cout << " 5. Valor Maximo                          " << endl;
        cout << " 6. Valor Minimo                          " << endl;
        cout << " 7. Borrar                                " << endl;
        
	cout << "\n INGRESE OPCION: ";
}

void menu(){
    
        int dato;  // numero a encolar
	int op;    // opcion del menu
 
        do{
		menuPrincipal();  cin >> op;

		switch (op){
                    
		case 1:
                    
                    cout << "\n NUMERO A INSERTAR: "; cin >> dato;
                    arbin->insertarVerificado(dato);
                    arbin->imprimirInorden(arbin->getRaiz());    
			break;
                        
		case 2:
                    
                    if(arbin->esVacio()){
                        cout << " El arbol esta vacio." << endl;
                    }else{
                        cout << " El arbol esta no vacio." << endl;
                    }
			break;

		case 3:
                    
                    if(arbin->esHoja()){
                        cout << " El arbol es hoja." << endl;
                    }else{
                        cout << " El arbol no es hoja." << endl;
                    }
			break;

		case 4:
                    
                    int peso;
                    peso = arbin->getPeso();
                        cout << "El peso del arbol es: " << peso << endl;
			break;
                        
		case 5:
                    
                    arbin->imprimirMayor();
			break;
                        
                case 6:
                    
                    arbin->imprimirMenor();
			break;
                        
                case 7:
                    int num;
                    cout << "\n NUMERO A BORRAR: "; cin >> num;
                    
                    cout << " El arbol actualmente posee estos elementos:  " << endl;
                    arbin->imprimirInorden(arbin->getRaiz()); 
                    
                    cout << " Borrando... " << endl;
                    arbin->borrar(arbin->getRaiz(), num);
                            
                    cout << " El arbol quedo: " << endl;
                    arbin->imprimirInorden(arbin->getRaiz()); 
			break;
		}

		cout << endl << endl;
		

	} while (op != 8);
    
}


int main(int argc, char** argv) {
    
     menu();
    return 0;
}

