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
    if(estaCheio()){
        cout << "A fila esta cheia\n";
        cout << "Nao foi possível inserir este elemento\n";

    } else{
        no* noNovo = new no;
        noNovo->valor=item;
        noNovo->proximo= nullptr;
        if(primeiro==nullptr){
            primeiro=noNovo;
            
        }else{
            ultimo->proximo=noNovo;
        }
        ultimo = noNovo;


    }


    }
TipoItem FilaDinamica::deletar(){

    if(estaVazio()){
        cout << "A fila está vazia\n";
        cout << "Nao existe elemento a ser removido";
        return 0;
    }else{
        no* noTemp = primeiro;
        TipoItem item = primeiro->valor;
        primeiro=primeiro->proximo;
        if(primeiro == nullptr){
            ultimo = nullptr;
        }

        delete noTemp;
        return item;
    }

    }
void FilaDinamica:: listar(){

    no* noTemp=primeiro;
    cout << "Fila=[ ";
    while(noTemp!=nullptr){
        cout << noTemp->valor; cout << " ";
        noTemp=noTemp->proximo;
    }
    cout << " ]";
    delete noTemp;

    }
    