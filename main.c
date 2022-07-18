#include<stdio.h>
#include<stdlib.h>
#include"pile.h"
int main()
{
    pile p = malloc(sizeof(pile));
    p = pile_vide();
    p = empiler(p,505);
    p = empiler(p,505);
    p = empiler(p,505);
    p = depiler(p);
    affichier_pile(p);
}