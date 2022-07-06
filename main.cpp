#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include "Usuario.h"
#include "Socio.h"
#include "Atendente.h"
#include "Clube.h"
using namespace std;

int main() {

  Clube *c = new Clube("MATA55");

  Socio* s1 = new Socio("João Silva", "178564205-8", "jsilva@gmail.com", 1001);
  Socio* s2 = new Socio("Maria Souza", "425789102-6", "msouza@gmail.com", 1002);
  
  //Dados do Sócio 1
  Mensalidade *m1A = new Mensalidade(2022, 1, 100.0);
  s1->adicionarMensalidade(*m1A);
  Mensalidade *m2A = new Mensalidade(2022, 2, 100.0);
  s1->adicionarMensalidade(*m2A);
  Mensalidade *m3A = new Mensalidade(2022, 3, 100.0);
  s1->adicionarMensalidade(*m3A);
  Mensalidade *m4A = new Mensalidade(2022, 4, 100.0);
  m4A->setQuitada(false);
  s1->adicionarMensalidade(*m4A);
  Mensalidade *m5A = new Mensalidade(2022, 5, 100.0);
  m5A->setQuitada(false);
  s1->adicionarMensalidade(*m5A);
  Mensalidade *m6A = new Mensalidade(2022, 6, 100.0);
  m6A->setQuitada(false);
  s1->adicionarMensalidade(*m6A);
  

  //Dados do Sócio 2
  Mensalidade* m1B = new Mensalidade(2022, 3, 100.0);
  s2->adicionarMensalidade(*m1B);
  Mensalidade* m2B = new Mensalidade(2022, 4, 100.0);
  s2->adicionarMensalidade(*m2B);
  Mensalidade* m3B = new Mensalidade(2022, 5, 100.0);
  s2->adicionarMensalidade(*m3B);
  Mensalidade* m4B = new Mensalidade(2022, 6, 100.0);
  s2->adicionarMensalidade(*m4B);

  //Adicona Socios ao Clube
  c->addMembros(*s1);
  c->addMembros(*s2);

  //Dados do Atendente
  Atendente* a1 = new Atendente("Carlos Santana", "481102670-3", "csantana@gmail.com", "csantana", "252103");

  //Interface Usuário
  int mat;
  int respostaInt = 0;
  string respostaStr;
  int qtd;

  while(true){
    cout << "---------- Sistema Clube ----------" << endl;
    cout << "Selecione sua opção: " << endl
         << "1 - Cadastrar Sócio" << endl
         << "2 - Exibir Mensalidades" << endl
         << "3 - Quitar Mensalidades" << endl
         << "4 - Sair" << endl;

    cin >> respostaInt;

    switch (respostaInt){
      case 1: {
        c->cadastrarSocio();
        break;
      }
      case 2: {
        cout << "Digite a Matrícula: ";
        cin >> respostaInt;
        cout << endl << endl;
        
        Socio temp = a1->pesquisarSocio(respostaInt, c);
        a1->exibirMensalidades(&temp);
        break;
      }
      case 3: {
        cout << "Digite a Matrícula: ";
        cin >> respostaInt;
        cout << endl;
        cout << "Digite a quantidade de mensalidades a serem quitadas: ";
        cin >> qtd;
        cout << endl << endl;

        Socio temp = a1->pesquisarSocio(respostaInt, c);
        a1->quitarMensalidade(&temp, qtd);
        break;
      }
      case 4: {
        cout << "Fim";
        break;
      }
        
    }

    if (respostaInt == 4){
      break;
    }

    char t;
    cout << endl << "Aperte qualquer tecla para continuar" << endl;
    cin >> t;
    
    system("clear");
  }

 
  return 0;
}