/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.cpp
 * Author: Maureen
 * 
 * Created on May 17, 2016, 10:06 PM
 */

#include "Nodo.h"

Nodo::Nodo() {
    setDer(NULL);
    setIzq(NULL);
}

Nodo::Nodo(int pinfo) {
    setInfo(pinfo);
    setDer(NULL);
    setIzq(NULL);
}

Nodo::Nodo(const Nodo& orig) {
}

Nodo::~Nodo() {
}
int Nodo::getInfo(){
    return info;
}
Nodo* Nodo::getIzq(){
    return izq;
}
Nodo* Nodo::getDer(){
    return der;
}
void Nodo::setInfo(int pinfo){
    info = pinfo;
}
void Nodo::setIzq(Nodo*pizq){
    izq = pizq;
}
void Nodo::setDer(Nodo*pder){
    der =pder;
}
