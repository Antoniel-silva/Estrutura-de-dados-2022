#include <iostream>
#include "CodigosLista.h"

using namespace std;

void substitui(Item item, Item substituto, Lista lista) {
    if(lista == NULL) return;
    
    if(lista->item == item) lista->item = substituto;
    return substitui(item, substituto, lista->prox);
}


int main() {

    Lista lista = no(1, no(5, no(1, no(7, no(1, NULL)))));
    substitui(1, 10, lista);

    exibir(lista);
}
