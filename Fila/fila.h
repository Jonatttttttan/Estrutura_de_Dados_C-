typedef int tipoItem;
const int max_itens=100;


class Fila{
private:
int primeiro,ultimo;
tipoItem* estrutura;


public:
Fila();

~Fila();

bool Vazio();

bool estaCheio();

void inserir(tipoItem item);

tipoItem remover();

void imprimir();



};