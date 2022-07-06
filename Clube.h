#include <iostream>
#include <vector>
#include "Socio.h"
#pragma once
using namespace std;

class Clube{
  private:
    string nome;
    vector<Socio> membros;

  public:
    
    Clube(){}
  
    Clube(string n){
      this->setNome(n);
    }

    void addMembros(Socio s){
      membros.push_back(s);
      return;
    }

    vector<Socio> getMembros(){
      return this->membros;
    }

    void setNome(string n){
      this->nome = n;
      return;
    }

    string getNome(){
      return this->nome;
    }

    void cadastrarSocio(){
      Socio* s = new Socio();
      string n, c, e;
      cout << "Digite o nome, CPF e email: " << endl;
      cin >> n >> c >> e;
      s->setNome(n);
      s->setCPF(c);
      s->setEmail(e);
      s->setMatricula(this->getMembros().back().getMatricula() + 1);
      Mensalidade *m = new Mensalidade(2022, 7, 100);
      s->adicionarMensalidade(*m);
      this->addMembros(*s);
      cout << "Socio cadastrado!" << endl;
    }

};