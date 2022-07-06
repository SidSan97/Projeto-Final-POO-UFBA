#include <iostream>
#include <vector>
#include "Usuario.h"
#include "Mensalidade.h"
#pragma once
using namespace std;

class Socio: public Usuario{
  private:
    int matricula;
    vector<Mensalidade> mensalidades;

  public:

  Socio(){}

  Socio(string n, string c, string e, int m):Usuario(n,c,e){
    this->setMatricula(m);
  }

  void setMatricula(int m){
    this->matricula = m;
    return;
  }

  int getMatricula(){
    return this->matricula;
  }

  vector<Mensalidade> getMensalidades(){
    return this->mensalidades;
  }

  void adicionarMensalidade(Mensalidade m){
    this->mensalidades.push_back(m);
  }

};