// - COMPILAZIONE -
// la prima volta usare <run>
// per compilare con la libreria:
// gcc main.c mylib.c -o prog
// esecuzione:
// ./prog

#include "mylib.h"

int main(void) 
{
    int dim;
    int vect[MAXVETT];

    dim=insvect(vect);

    printvect(vect,dim);

    ord_sost(vect,dim);

  return 0;
}