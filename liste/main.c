#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "liste.h"


typedef struct {
    char a[16];
    int numero;
} struttura;


int getKey(link x) {
    return ((struttura*)(getVal(x)))->numero;
}

int main() {


    Lista *l;
    link x;
    struttura *s;
    s=(struttura*)malloc(sizeof(struttura));

    strcpy(s->a, "ciao");
    s->numero=12;

    l=initList(sizeof(struttura));
    addHead(l, s, "p");

    for (x=getHead(l); x!=NULL; x=getNext(x))
        printf("%d", getKey(x));
    return 0;
}


