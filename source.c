#include<stdio.h>
#include<stdlib.h>
#include "pile.h"
pile pile_vide()
{
    return NULL;
}
pile empiler(pile p , int e)
{
    pile cellule;
    cellule = (pile)malloc(sizeof(cellule));
    cellule->n = e;
    cellule->suivant = p;
    return cellule;
}
pile depiler(pile p)
{
    pile supp;
    if (p == NULL)
        printf("LA PILE EST VIDE\n");
    else
    {
        supp = p;
        p = p->suivant;
    }
    return p;
}
void affichier_pile(pile p)
{
    pile tete;
    tete = p;
    while(p != NULL)
    {
        printf("%d\n" , p->n);
        p = p->suivant;
    }
}