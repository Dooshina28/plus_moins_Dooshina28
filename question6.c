#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void plus_moins(int choix_joueur, int valeur_a_trouver)
{
    if (choix_joueur < valeur_a_trouver)
    {
        printf("plus\n");
    }
    else if(choix_joueur > valeur_a_trouver)
    {
        printf("moins\n");
    }
    else
    {
        printf("Bingo\n");
    }
}

int main()
{
    srand (time(NULL));
    int valeur = rand() % 100 + 1;
    int choix;
    printf("Entrez un entier svp: ");
    scanf("%d", &choix);
    plus_moins(choix, valeur);
    return 0;
}

