#include <iostream>
#include "pilha.h"

using namespace std;
int main(){
    Pilha pilha1;
    TipoItem item;
    int opcao;
    cout << "Programa gerador de pilhas\n";

    do {
        cout << "Digite 0 para parar o programa\n";
        cout << "Digite 1 para inserir 1 elemento\n";
        cout << "Digite 2 para remover 1 elemento\n";
        cout << "Digite 3 para imprimir a pilha";
        cin >> opcao;

         if(opcao == 1){
            cout << "Digite o elemento a ser inserido";
            cin >> item;
            pilha1.push(item);

         }else if(opcao==2){
            if(pilha1.estaVazia()){
                cout << "Pilha esta vazia";
            }else{
            item=pilha1.pop();
            cout << "Elemento removido: " << item << endl;}
         }else if(opcao==3){
            pilha1.imprimir();
         }

    } while(opcao!=0);

    

return 0;
}