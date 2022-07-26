typedef int TipoItem;

struct No
{
  TipoItem valor;
  No* proximo;
};

class PilhaDinamica{
    private:
    No* NoTopo;


    public:
    PilhaDinamica();
    ~PilhaDinamica();
    bool Vazio();
    bool estaCheio();
    void inserir(TipoItem item);
    TipoItem remover();
    void imprimir();
    
};