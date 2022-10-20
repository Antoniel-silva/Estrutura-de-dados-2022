#include <iostream>
#include "CodigosLista.h"

using namespace std;

Item buscarEnesimo(int posicao, Lista lista) {
    if (posicao < 1 || lista->prox == NULL) return -1;
    if(posicao == 1) return lista->item;
    else return buscarEnesimo(posicao - 1, lista->prox);
}


int main() {

    Lista lista = no(10, no(20, no(30, no(40, no(50, NULL)))));

    cout << buscarEnesimo(2, lista);
}
