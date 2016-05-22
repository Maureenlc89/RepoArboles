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

void Arbol::borrar(Nodo *n)
{
    if (n != NULL)
    {
        borrar(n->getIzq());
        borrar(n->getDer());
        delete n;
    }
}

void Arbol::insertarVerificado(int x)
{
    if (!existe(x))
    {
        Nodo *nuevo;
        nuevo = new Nodo();
        nuevo->getInfo() = x;
        nuevo->getIzq() = NULL;
        nuevo->getDer() = NULL;
        if (raiz == NULL)
            raiz = nuevo;
        else
        {
            Nodo *anterior, *reco;
            anterior = NULL;
            reco = raiz;
            while (reco != NULL)
            {
                anterior = reco;
                if (x < reco->getInfo())
                    reco = reco->getIzq();
                else
                    reco = reco->getDer();
            }
            if (x < anterior->getInfo())
                anterior->getIzq() = nuevo;
            else
                anterior->getDer() = nuevo;
        }
    }
}

bool Arbol::existe(int x)
{
    Nodo *reco = raiz;
    while (reco != NULL) 
    {
        if (x == reco->getInfo())
                return true;
        else
            if (x>reco->getInfo())
                reco = reco->getDer();
            else
                reco = reco->getIzq();
    }
    return false;
}

 void Arbol::imprimirMayor()
 {
    if (raiz != NULL) 
    {
        Nodo *reco = raiz;
        while (reco->getDer() != NULL)
            reco = reco->getDer();
        cout<<"Mayor valor del árbol:" <<reco->getInfo();
    }
}
 
  void Arbol::imprimirMenor()
 {
    if (raiz != NULL) 
    {
        Nodo *reco = raiz;
        while (reco->getIzq() != NULL)
            reco = reco->getIzq();
        cout<<"Menor valor del árbol:" <<reco->getInfo();
    }
}