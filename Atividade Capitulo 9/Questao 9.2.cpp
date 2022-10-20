#include <iostream>
#include "CodigosLista.h"

using namespace std;

int ocorrencias(Item item, Lista lista) {
    
    int contador = 0;

    while (lista != NULL) {
        if(item == lista->item) contador++;
        lista = lista->prox;
    }
    return contador;
}


int main() {

    Lista lista = no(1, no(1, no(1, no(8, no(1, NULL)))));

    cout << ocorrencias(1, lista);
    

}
