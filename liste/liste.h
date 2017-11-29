#ifndef LISTE_H_INCLUDED
#define LISTE_H_INCLUDED

typedef struct _Lista Lista;
typedef struct node node_t, *link;

link getHead(Lista *l);
link getNext(link x);
link getVal(link x);

Lista *initList(size_t elSize);
link newNode(void *val, size_t elSize, link prev, link next, char *mode);
int addHead(Lista *l, void *val, char *mode);
int addTail(Lista *l, void *val, char *mode);

#endif // LISTE_H_INCLUDED
