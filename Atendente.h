#include <iostream>
#include "Usuario.h"
#include "Clube.h"
//#include <iterator>
using namespace std;

class Atendente: public Usuario{
  private:
    string id;
    string senha;

  public:
    
    Atendente(){}

    Atendente(string n, string c, string e, string i, string s):Usuario(n,c,e){
      this->setID(i);
      this->setSenha(s);
    }

    void setID(string i){
      this->id = i;
      return;
    }
  
    string getID(){
      return this->id;
    }  
  
    void setSenha(string s){
      this->senha = s;
      return;
    }
  
    string getSenha(){
      return this->senha;
    }

    Socio pesquisarSocio(int matricula, Clube *c){
      
      for(int i = 0; i < c->getMembros().size(); i++){
        if(c->getMembros().at(i).getMatricula() == matricula){
          return c->getMembros().at(i);
        }
      }
    }

    void exibirMensalidades(Socio *socio){
      cout << socio->getNome() << endl;
      for(int i = 0; i < socio->getMensalidades().size(); i++){
        cout << "Mês: " << socio->getMensalidades().at(i).getMes()
             << " Ano: " << socio->getMensalidades().at(i).getAno()
             << " - ";

        if(socio->getMensalidades().at(i).getQuitada()){
          cout << "Pago";
        }else{
          cout << "Pendente";
        }
        cout << endl;
      }
    }

    void quitarMensalidade(Socio *socio, int q){
      
      int tamanho = socio->getMensalidades().size();
      int count = 0;
      int p = tamanho - count + 1;
      float valorAtual = 0;

      for(int i = 0; i < tamanho; i++){
        if(socio->getMensalidades().at(i).getQuitada() == true){
          count++;
        }
      }

      while(q > 0){
        for(int i = 0; i < tamanho; i++){
          if(socio->getMensalidades().at(i).getQuitada() == false && q != 0){
            valorAtual = socio->getMensalidades().at(i).getValor() + (socio->getMensalidades().at(i).getValor() * p * 0.02);
            cout << "Mensalidade do mês " << socio->getMensalidades().at(i).getMes()
                 << " Ano " << socio->getMensalidades().at(i).getAno()
                 << " com o valor atual de " << valorAtual << " foi quitada."
                 << endl << endl;
            q--;
            p--;
            
          }
        }
      }
    }


};