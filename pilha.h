
typedef int TipoItem;
const int max_itens = 100;

class Pilha{
   private:
     int tamanho;
     TipoItem* estrutura;


   public:
   Pilha();
   
  ~Pilha();
   

   bool estaCheia();
   

   bool estaVazia();
  

   void push(TipoItem item);
   

   TipoItem pop();

   void imprimir();

   int tamanhoFila();



};
