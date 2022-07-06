#include <iostream>
#pragma once
using namespace std;

class Usuario{
  private:
    string nome;
    string cpf;
    string email;

  public:

    Usuario(){}

    Usuario(string n, string c, string e){
      this->setNome(n);
      this->setCPF(c);
      this->setEmail(e);
    }

    void setNome(string n){
      this->nome = n;
      return;
    }

    string getNome(){
      return this->nome;
    }
  
    void setCPF(string c){
      this->cpf = c;
      return;
    }
  
    string getCPF(){
      return this->cpf;
    }

    void setEmail(string e){
      this->email = e;
      return;
    }

    string getEmail(){
      return this->email;
    }

};