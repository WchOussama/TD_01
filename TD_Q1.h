#include <iostream>
using namespace std;
class COMPTEBNC{

private:
  string _infoclient;
  string _numducompte;
  double _solde;
public:
  COMPTEBNC(string infoclient, string numducompte, double solde) : _infoclient(infoclient), _numducompte(numducompte), _solde(solde){}
  retrait(int montant);
  paiment(double montant);
  transfert(int numdurecep);
  credit(int montant);
  depot(int montant);
}