#include <iostream>
#include "fila.h"

using namespace std;


Fila::Fila(){
    primeiro=0;
    ultimo=0;
    estrutura=new tipoItem[max_itens];
    for(int i=primeiro;i<max_itens;++i){
        estrutura[i]=0;
    }

}

Fila::~Fila(){
    delete [] estrutura;

}

bool Fila::Vazio(){
    return primeiro==ultimo;

}
bool Fila::estaCheio(){
    return ultimo-primeiro==max_itens;

}
void Fila::inserir(tipoItem item){
    if(not estaCheio()){
    estrutura[ultimo % max_itens]=item;
    ultimo++;
    }else{
        cout << "A fila já está cheia";
    }

}
tipoItem Fila::remover(){
    if(not Vazio()){
        cout << "O elemento deletado foi:" + estrutura[primeiro % max_itens];
        primeiro++;
        return estrutura[(primeiro-1) % max_itens];

    }
    cout << "Nao foi possivel deletar, fila vazia";
    return 0;

}
void Fila::imprimir(){
    cout << "[ ";
    for(int i=primeiro % max_itens;i<ultimo;++i){
        cout << estrutura[i] << " ";
    }
    cout << "].";
}