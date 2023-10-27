#include <iostream>
#include "TD_Q1.h"
using namespace std;

void depot(int montant){
    solde += montant;
}

void retrait(int montant){
    if (solde >= montant){
        solde -= montant;
    }
    else{
        cout <<"votre solde n'est pas suffisant";
    }
}

void paiment(double montant){
    if (solde >= montant){
        solde -= montant;
    }
    else{
        cout <<"votre solde n'est pas suffisant";
    }
}
void transfert(COMPTEBNC &recepteur, double montant){
    if (solde >= montant){
        solde -= montant;
        recepteur.depot(montant);
    }
    else{
        cout <<"votre solde n'est pas suffisant";
    }
}
void credit(int montant){
    
}