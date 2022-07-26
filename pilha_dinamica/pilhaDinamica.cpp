#include <iostream>
#include "pilhaDinamica.h"
#include <cstddef>

using namespace std;

    PilhaDinamica::PilhaDinamica(){
        NoTopo=nullptr;
    }

    PilhaDinamica::~PilhaDinamica(){

    }
   bool PilhaDinamica:: estaCheio(){
        return NoTopo==nullptr;

    }
   bool PilhaDinamica:: Vazio(){
        No* NoNovo;
        try{
            NoNovo = new No;
            delete NoNovo;
            return false;

        } catch(bad_alloc exception){
            return true;

        }
        }

    

    void PilhaDinamica:: inserir(TipoItem item){}

    TipoItem PilhaDinamica:: remover(){}

    void PilhaDinamica:: imprimir(){}
    