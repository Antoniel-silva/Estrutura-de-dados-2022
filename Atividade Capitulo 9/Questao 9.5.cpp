#include <iostream>
#include "CodigosLista.h"

using namespace std;

int soma(Lista lista) {
    
    return lista->item + soma(lista->prox);
}


int main() {

    Lista lista = no(4, no(2, no(3, no(6, no(5, NULL)))));

    cout << soma(lista);
}
