#include <iostream>
#include "CodigosLista.h"

using namespace std;

Item ultimo(Lista lista) {
    while (lista->prox != NULL) lista = lista->prox;
    return lista->item;
}


int main() {

    Lista lista = no(1, no(2, no(3, no(4, no(5, NULL)))));
    

    cout << ultimo(lista) << endl;
    

}
