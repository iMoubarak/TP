#include <stdio.h>
#include <stdlib.h>
#include "pile.h"
int main()
{
    pile p = malloc(sizeof(pile));
    p = pile_vide();
    p = empiler(p,1);
    p = empiler(p,2);
    p = empiler(p,3);
    p = depiler(p);
    affichier_pile(p);
    return 0;
}