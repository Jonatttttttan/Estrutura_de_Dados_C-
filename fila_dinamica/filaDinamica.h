
typedef int TipoItem;

struct no{
    TipoItem valor;
    no* proximo;

};

class FilaDinamica{

    private:
       no* primeiro;
       no* ultimo;




    public:
     FilaDinamica();
     ~FilaDinamica();
    bool estaVazio();
    bool estaCheio();
    void inserir(TipoItem item);
    TipoItem deletar();
    void listar();
    


};