/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.h
 * Author: Maureen
 *
 * Created on May 17, 2016, 10:06 PM
 */

#ifndef NODO_H
#define	NODO_H
#include <iostream>
using namespace std;

class Nodo {
public:
	Nodo();
        Nodo(int);
	Nodo(const Nodo& orig);
	virtual ~Nodo();
        int getInfo();
        Nodo* getIzq();
        Nodo* getDer();
        void setInfo(int);
        void setIzq(Nodo*);
        void setDer(Nodo*);

private:
        int info;
        Nodo* izq;
        Nodo* der;

};

#endif	/* NODO_H */

