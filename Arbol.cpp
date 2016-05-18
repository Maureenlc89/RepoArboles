/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Arbol.cpp
 * Author: Maureen
 * 
 * Created on May 17, 2016, 10:15 PM
 */

#include "Arbol.h"


Arbol::Arbol() {
    raiz=NULL;
}

Arbol::Arbol(const Arbol& orig) {
}

Arbol::~Arbol() {
}

Nodo* Arbol::getRaiz(){
        return raiz;
}
void Arbol::setRaiz(Nodo* praiz){
    raiz=praiz;
}

bool Arbol::esHoja (void) {

    if (raiz == NULL || raiz->getIzq()!=0 || raiz->getDer()!=0) {
        return  true;
    } else {
        return false;
    }

}

bool Arbol::esVacio (void) {

    if (raiz == NULL) { 
        return true;
    } else {
    return false;
    }

}

bool Arbol::estaElemento(const int &pElem) {

    return estaElemRecursivo(raiz, pElem);
}

bool Arbol::estaElemRecursivo(Nodo*r, const int &pElem){

    if (r == NULL) {

     return false;

    } else if (r->getInfo() == pElem) {

        return true;

    } else if (pElem > r->getInfo()) {

        return estaElemRecursivo(r->getDer(), pElem);

    } else {

        return estaElemRecursivo(r->getIzq(), pElem);

    }
}

int Arbol::getPeso(void) {
    return pesoRecursivo(raiz);

}

int Arbol::pesoRecursivo(Nodo *r){

    if (r == NULL) {

    return 0;

    } else if (r->getIzq() == 0 && r->getDer() == 0) {

    return 1;

    } else {

    return 1 + pesoRecursivo(r->getIzq())

    + pesoRecursivo(r->getDer());
    }

}

bool Arbol::insertarElemento (const int &pElem) {

    if (estaElemento(pElem) == true) {
            return false;
    } else {
           return insertarElemRecursivo(&raiz, pElem);
    }

}


bool Arbol::insertarElemRecursivo(Nodo* *r, const int &pElem){

        Nodo * nuevo;
        if (*r == NULL) {
        nuevo = new Nodo(pElem);
       // assert (nuevo != NULL);
        *r = nuevo;
        return true;
        } else if (pElem > (*r)->getInfo()) {
        //return insertarElemRecursivo (&((*r)->getDer()), pElem);
        } else {
       // return insertarElemRecursivo (&((*r)->getIzq()), pElem);

        }

} 
