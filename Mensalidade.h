#include <iostream>
#pragma once
using namespace std;

class Mensalidade{
  private:
    int ano;
    int mes;
    float valor;
    bool quitada;
    
  public:

    Mensalidade(){}

    Mensalidade(int a, int m, float v){
      this->setAno(a);
      this->setMes(m);
      this->setValor(v);
      this->setQuitada(true);
    }
    void setAno(int a){
      this->ano = a;
      return;
    }
      
    int getAno(){
      return this->ano;
    }  
    
    void setMes(int m){
      this->mes = m;
      return;
    }
      
    int getMes(){
      return this->mes;
    }  
    
    void setValor(float v){
      this->valor = v;
      return;
    }
      
    float getValor(){
      return this->valor;
    }  
    
    void setQuitada(bool q){
      this->quitada = q;
      return;
    }
      
    bool getQuitada(){
      return this->quitada;
    }
  
};