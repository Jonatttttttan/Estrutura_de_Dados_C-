#include <iostream>
#include "pilha.h"

using namespace std;
Pilha::Pilha()
   {
       tamanho = 0;
       estrutura = new TipoItem[max_itens];
   }

   Pilha::~Pilha()
   {
      delete [] estrutura;
   }

   bool Pilha::estaCheia()
   {
       return (tamanho == max_itens);
   }

   bool Pilha::estaVazia()
   {
    return (tamanho==0);
   }

   void Pilha::push(TipoItem item)
   {
    if(estaCheia()){
        cout << "A pilha está cheia\n";
    }else {
        estrutura[tamanho]=item;
        tamanho=tamanho+1;
    }
   }

   TipoItem Pilha::pop()
   {
    if (estaVazia()){
        cout << "A pilha está vazia!\n";
        return 0;
    }else {
         tamanho--;
        return estrutura[tamanho];
       
    }
   }

   void Pilha::imprimir()
   {
    cout << "Pilha: [ ";
    for (int i =0; i<tamanho;++i){
        cout << estrutura[i] << " ";
    }
    cout << "]\n";
   }

   int Pilha::tamanhoFila()
   {
    return tamanho;
   }



           