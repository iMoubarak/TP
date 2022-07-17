typedef struct pile
{
    int n;
    struct pile *suivant;
}*pile;
pile pile_vide();