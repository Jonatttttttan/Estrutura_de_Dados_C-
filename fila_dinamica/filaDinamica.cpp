#include <iostream>
#include "filaDinamica.h"
#include <cstddef>
#include <new>

using namespace std;

FilaDinamica::FilaDinamica(){
primeiro=nullptr;
ultimo=nullptr;

}
FilaDinamica::~FilaDinamica(){
    no* noTemp;
    
    while(primeiro!=nullptr){
        noTemp=primeiro;
        primeiro=primeiro->proximo;
        delete noTemp;
    }
    ultimo=nullptr;

     }
bool FilaDinamica:: estaVazio(){
    return primeiro==nullptr;

    }
bool FilaDinamica::estaCheio(){
    no* noTemp;
    try{
        noTemp=new no;
        delete noTemp;
        return false;
    }catch(bad_alloc exception){
        cout << "Nao existe espaço suficiente";
        return true;

    }

    }
void FilaDinamica::inserir(TipoItem item){

    }
TipoItem FilaDinamica::deletar(){

    }
void FilaDinamica:: listar(){

    }
    