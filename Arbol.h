/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Arbol.h
 * Author: Maureen
 *
 * Created on May 17, 2016, 10:15 PM
 */

#ifndef ARBOL_H
#define	ARBOL_H
#include "Nodo.h"

class Arbol {
public:
	Arbol();
	Arbol(const Arbol& orig);
	virtual ~Arbol();
        Nodo* getRaiz();
        void setRaiz(Nodo*);  
        bool esHoja(); 
        bool esVacio();
        bool estaElemento (const int &pElem);
        bool estaElemRecursivo(Nodo*r,const int &pElem);
        int getPeso();
        int pesoRecursivo(Nodo*);
        bool insertarElemento (const int &pElem);
        bool insertarElemRecursivo(Nodo* *r, const int &pElem);
        void borrar(Nodo *n);
        
        void insertarVerificado(int x);
        bool existe(int x);
        void imprimirMayor();
        void imprimirMenor();
        
private:
    Nodo* raiz;
    
};

#endif	/* ARBOL_H */

