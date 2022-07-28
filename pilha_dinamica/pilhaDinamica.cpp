#include <iostream>
#include "pilhaDinamica.h"
#include <cstddef>

using namespace std;

    PilhaDinamica::PilhaDinamica(){
        NoTopo=nullptr;
    }

    PilhaDinamica::~PilhaDinamica(){
      No* NoTemp;
      while (NoTopo!=nullptr){
        NoTemp=NoTopo;
        NoTopo=NoTopo->proximo;
        delete NoTemp;
      }

    }
   bool PilhaDinamica:: Vazio(){
        return NoTopo==nullptr;

    }
   bool PilhaDinamica:: estaCheio(){
        No* NoNovo;
        try{
            NoNovo = new No;
            delete NoNovo;
            return false;

        } catch(bad_alloc exception){
            return true;

        }
        }

    

    void PilhaDinamica:: inserir(TipoItem item){

        if(estaCheio()){
            cout << "Pilha cheia, impossivel inserir elemento";
        }else{
            No* NoNovo = new No;
            NoNovo->valor = item;
            NoNovo->proximo = NoTopo;
            NoTopo=NoNovo;
        }
    }

    TipoItem PilhaDinamica:: remover(){
        if(Vazio()){
            cout << "A pilha esta vazia";
            return 0;
        }else{
            No* NoTemp;
            NoTemp = NoTopo;
            TipoItem item=NoTopo->valor;
            NoTopo = NoTopo->proximo;
            delete NoTemp;

            return item;

        }
    }

    void PilhaDinamica:: imprimir(){
        cout << "im";
        No* NoTemp;
        NoTemp=NoTopo;
        while(NoTemp!=nullptr){
            cout << NoTemp->valor;
            NoTemp=NoTemp->proximo;
            cout << "listando";
        }
       delete NoTemp;
    }
    