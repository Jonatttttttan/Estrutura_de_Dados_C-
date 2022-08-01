#include <iostream>
#include "filaDinamica.h"

using namespace std;

int main(){
    FilaDinamica fila1;
    int opcao;
    TipoItem item;
    cout <<"Programa gerador de filas\n";

    do{
        cout << "Digite 0 para parar o programa\n";
        cout << " digite 1 para inserir um elemento\n";
        cout << "digite 2 para remover 1 elemento\n";
        cout << "digite 3 para imprimir a fila\n";
        cin >> opcao;

        if(opcao==1){
            cout << "digite o item a ser inserido:\n";
            cin >> item;
            fila1.inserir(item);}
        else if(opcao ==2){
            cout << "deletando item:\n";
            item=fila1.deletar();
            cout << "item deletado: " << item;
        }
        else if(opcao==3){
            fila1.listar();
        }else {
            break;
        }

        


    }while(opcao!=0);



    return 0;
}