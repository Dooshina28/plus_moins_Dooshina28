/*QUESTION 11*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void plus_moins(int choix_joueur, int valeur_a_trouver, int rep_choix)
{
    if (rep_choix == 1)
    {
        do
        {
            if (choix_joueur < valeur_a_trouver)
            {
                printf("plus\n");
            }
            else if (choix_joueur > valeur_a_trouver)
            {
                printf("moins\n");
            }
            printf("Entrez un entier svp: ");
            scanf("%d", &choix_joueur);
        } while (choix_joueur != valeur_a_trouver);
        printf("Bingo\n");
    }
    else if (rep_choix == 2)
    {
        for (int x = 1; x <= 25; x++)
        {
            if (choix_joueur < valeur_a_trouver)
            {
                printf("plus\n");
            }
            else if (choix_joueur > valeur_a_trouver)
            {
                printf("moins\n");
            }
            else
            {
                printf("Bingo\n");
                break;
            }
            if (x == 25)
            {
                break;
            }
            printf("Entrez un entier svp: ");
            scanf("%d", &choix_joueur);
        }
    }
    else if (rep_choix == 3)
    {
        for (int x = 1; x <= 10; x++)
        {
            if (choix_joueur < valeur_a_trouver)
            {
                printf("plus\n");
            }
            else if (choix_joueur > valeur_a_trouver)
            {
                    printf("moins\n");
            }
            else
            {
                printf("Bingo\n");
                break;
            }
            if (x == 10)
            {
                break;
            }
            printf("Entrez un entier svp: ");
            scanf("%d", &choix_joueur);
        }
    }
}
void deux_joueurs(int choix_joueur, int valeur_a_trouver, int val_a_trouver, int numero_de_joueur, int nombre_tour, int nombre_de_coup, int nombre_de_essaie_1, int nombre_de_essaie_2, int points_joueur_1, int points_joueur_2)
{
    int total1 = 0;
    int total2 = 0;
    int stop = 0;
    while (stop != nombre_tour)
    {
        if (numero_de_joueur == 1)
        {
            printf("Joueur 1: Entrez un nombre de coup svp: ");
            scanf("%d", &nombre_de_coup);
            if (nombre_de_coup <= 10)
            {
                printf("Entrez un nombre de coup qui est plus grand que 10 svp: \n");
                printf("Entrez un nombre de coup svp: ");
                scanf("%d", &nombre_de_coup);
                printf("Joueur 2: \n");
                printf("Entrez un entier svp: ");
                scanf("%d", &choix_joueur);
                while (choix_joueur != valeur_a_trouver && nombre_de_essaie_1 < nombre_de_coup)
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
                        break;
                    }
                    nombre_de_essaie_1 = nombre_de_essaie_1 + 1;
                    if (nombre_de_essaie_1 == nombre_de_coup)
                    {
                        break;
                    }
                    printf("Entrez un entier svp: ");
                    scanf("%d", &choix_joueur);
                }
                if (choix_joueur == valeur_a_trouver)
                {
                    printf("Bingo\n");
                }
                points_joueur_2 = nombre_de_coup - nombre_de_essaie_1;
                printf("Le nombre de points pour joueur 2 est %d\n", points_joueur_2);
                total2 = total2 + points_joueur_2;
            }
            else
            {
                printf("Joueur 2: \n");
                printf("Entrez un entier svp: ");
                scanf("%d", &choix_joueur);
                while (choix_joueur != valeur_a_trouver && nombre_de_essaie_1 < nombre_de_coup)
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
                        break;
                    }
                    nombre_de_essaie_1 = nombre_de_essaie_1 + 1;
                    if (nombre_de_essaie_1 == nombre_de_coup)
                    {
                        break;
                    }
                    printf("Entrez un entier svp: ");
                    scanf("%d", &choix_joueur);
                }
                if (choix_joueur == valeur_a_trouver)
                {
                    printf("Bingo\n");
                }
                points_joueur_2 = nombre_de_coup - nombre_de_essaie_1;
                printf("Le nombre de points pour joueur 2 est %d\n", points_joueur_2);
                total2 = total2 + points_joueur_2;
            }
            printf("Maintenant c'est le tour du joueur 2\n");
            printf("Joueur 2: Entrez un nombre de coup svp: ");
            scanf("%d", &nombre_de_coup);
            if (nombre_de_coup <= 10)
            {
                printf("Entrez un nombre de coup qui est plus grand que 10 svp: \n");
                printf("Entrez un nombre de coup svp: ");
                scanf("%d", &nombre_de_coup);
                printf("Joueur 1: \n");
                printf("Entrez un entier svp: ");
                scanf("%d", &choix_joueur);
                while (choix_joueur != val_a_trouver && nombre_de_essaie_2 < nombre_de_coup)
                {
                    if (choix_joueur < val_a_trouver)
                    {
                        printf("plus\n");
                    }
                    else if (choix_joueur > val_a_trouver)
                    {
                        printf("moins\n");
                    }
                    else
                    {
                        break;
                    }
                    nombre_de_essaie_2 = nombre_de_essaie_2 + 1;
                    if (nombre_de_essaie_2 == nombre_de_coup)
                    {
                        break;
                    }
                    printf("Entrez un entier svp: ");
                    scanf("%d", &choix_joueur);
                }
                if (choix_joueur == val_a_trouver)
                {
                    printf("Bingo\n");
                }
                points_joueur_1 = nombre_de_coup - nombre_de_essaie_2;
                printf("Le nombre de points pour joueur 1 est %d\n", points_joueur_1);
                total1 = total1 + points_joueur_1;
                stop = stop + 1;
                srand (time(NULL));
                valeur_a_trouver = rand() % 100 + 1;
                val_a_trouver = rand() % 100 + 1;
                nombre_de_essaie_1 = 0;
                nombre_de_essaie_2 = 0;
            }
            else
            {
                printf("Joueur 1: \n");
                printf("Entrez un entier svp: ");
                scanf("%d", &choix_joueur);
                while (choix_joueur != val_a_trouver && nombre_de_essaie_2 < nombre_de_coup)
                {
                    if (choix_joueur < val_a_trouver)
                    {
                        printf("plus\n");
                    }
                    else if (choix_joueur > val_a_trouver)
                    {
                        printf("moins\n");
                    }
                    else
                    {
                        break;
                    }
                    nombre_de_essaie_2 = nombre_de_essaie_2 + 1;
                    if (nombre_de_essaie_2 == nombre_de_coup)
                    {
                        break;
                    }
                    printf("Entrez un entier svp: ");
                    scanf("%d", &choix_joueur);
                }
                if (choix_joueur == val_a_trouver)
                {
                    printf("Bingo\n");
                }
                points_joueur_1 = nombre_de_coup - nombre_de_essaie_2;
                printf("Le nombre de points pour joueur 1 est %d\n", points_joueur_1);
                total1 = total1 + points_joueur_1;
                stop = stop + 1;
                srand (time(NULL));
                valeur_a_trouver = rand() % 100 + 1;
                val_a_trouver = rand() % 100 + 1;
                nombre_de_essaie_1 = 0;
                nombre_de_essaie_2 = 0;
            }
        }
        else if (numero_de_joueur == 2)
        {
            printf("Joueur 2: Entrez un nombre de coup svp: ");
            scanf("%d", &nombre_de_coup);
            if (nombre_de_coup <= 10)
            {
                printf("Entrez un nombre de coup qui est plus grand que 10 svp: \n");
                printf("Entrez un nombre de coup svp: ");
                scanf("%d", &nombre_de_coup);
                printf("Joueur 1: \n");
                printf("Entrez un entier svp: ");
                scanf("%d", &choix_joueur);
                while (choix_joueur != valeur_a_trouver && nombre_de_essaie_2 < nombre_de_coup)
                {
                    if (choix_joueur < valeur_a_trouver)
                    {
                        printf("plus\n");
                    }
                    else if (choix_joueur > valeur_a_trouver)
                    {
                        printf("moins\n");
                    }
                    else
                    {
                        break;
                    }
                    nombre_de_essaie_2 = nombre_de_essaie_2 + 1;
                    if (nombre_de_essaie_2 == nombre_de_coup)
                    {
                        break;
                    }
                    printf("Entrez un entier svp: ");
                    scanf("%d", &choix_joueur);
                }
                if (choix_joueur == valeur_a_trouver)
                {
                    printf("Bingo\n");
                }
                points_joueur_1 = nombre_de_coup - nombre_de_essaie_2;
                printf("Le nombre de points pour joueur 1 est %d\n", points_joueur_1);
                total1 = total1 + points_joueur_1;
            }
            else
            {
                printf("Joueur 1: \n");
                printf("Entrez un entier svp: ");
                scanf("%d", &choix_joueur);
                while (choix_joueur != valeur_a_trouver && nombre_de_essaie_2 < nombre_de_coup)
                {
                    if (choix_joueur < valeur_a_trouver)
                    {
                        printf("plus\n");
                    }
                    else if (choix_joueur > valeur_a_trouver)
                    {
                        printf("moins\n");
                    }
                    else
                    {
                        break;
                    }
                    nombre_de_essaie_2 = nombre_de_essaie_2 + 1;
                    if (nombre_de_essaie_2 == nombre_de_coup)
                    {
                        break;
                    }
                    printf("Entrez un entier svp: ");
                    scanf("%d", &choix_joueur);
                }
                if (choix_joueur == valeur_a_trouver)
                {
                    printf("Bingo\n");
                }
                points_joueur_1 = nombre_de_coup - nombre_de_essaie_2;
                printf("Le nombre de points pour joueur 1 est %d\n", points_joueur_1);
                total1 = total1 + points_joueur_1;
            }
            printf("Maintenant c'est le tour du joueur 1\n");
            printf("Joueur 1: Entrez un nombre de coup svp: ");
            scanf("%d", &nombre_de_coup);
            if (nombre_de_coup <= 10)
            {
                printf("Entrez un nombre de coup qui est plus grand que 10 svp: \n");
                printf("Entrez un nombre de coup svp: ");
                scanf("%d", &nombre_de_coup);
                printf("Joueur 2: \n");
                printf("Entrez un entier svp: ");
                scanf("%d", &choix_joueur);
                while (choix_joueur != val_a_trouver && nombre_de_essaie_1 < nombre_de_coup)
                {
                    if (choix_joueur < val_a_trouver)
                    {
                        printf("plus\n");
                    }
                    else if(choix_joueur > val_a_trouver)
                    {
                        printf("moins\n");
                    }
                    else
                    {
                        break;
                    }
                    nombre_de_essaie_1 = nombre_de_essaie_1 + 1;
                    if (nombre_de_essaie_1 == nombre_de_coup)
                    {
                        break;
                    }
                    printf("Entrez un entier svp: ");
                    scanf("%d", &choix_joueur);
                }
                if (choix_joueur == val_a_trouver)
                {
                    printf("Bingo\n");
                }
                points_joueur_2 = nombre_de_coup - nombre_de_essaie_1;
                printf("Le nombre de points pour joueur 2 est %d\n", points_joueur_2);
                total2 = total2 + points_joueur_2;
                stop = stop + 1;
                srand (time(NULL));
                valeur_a_trouver = rand() % 100 + 1;
                val_a_trouver = rand() % 100 + 1;
                nombre_de_essaie_1 = 0;
                nombre_de_essaie_2 = 0;
            }
            else
            {
                printf("Joueur 2: \n");
                printf("Entrez un entier svp: ");
                scanf("%d", &choix_joueur);
                while (choix_joueur != val_a_trouver && nombre_de_essaie_1 < nombre_de_coup)
                {
                    if (choix_joueur < val_a_trouver)
                    {
                        printf("plus\n");
                    }
                    else if(choix_joueur > val_a_trouver)
                    {
                        printf("moins\n");
                    }
                    else
                    {
                        break;
                    }
                    nombre_de_essaie_1 = nombre_de_essaie_1 + 1;
                    if (nombre_de_essaie_1 == nombre_de_coup)
                    {
                        break;
                    }
                    printf("Entrez un entier svp: ");
                    scanf("%d", &choix_joueur);
                }
                if (choix_joueur == val_a_trouver)
                {
                    printf("Bingo\n");
                }
                points_joueur_2 = nombre_de_coup - nombre_de_essaie_1;
                printf("Le nombre de points pour joueur 2 est %d\n", points_joueur_2);
                total2 = total2 + points_joueur_2;
                stop = stop + 1;
                srand (time(NULL));
                valeur_a_trouver = rand() % 100 + 1;
                val_a_trouver = rand() % 100 + 1;
                nombre_de_essaie_1 = 0;
                nombre_de_essaie_2 = 0;
            }
        }
        printf("Pour le tour %d\n", stop);
        if(points_joueur_1 > points_joueur_2)
        {
            printf("Le gagnant est le joueur 1\n");
        }
        else if(points_joueur_2 > points_joueur_1)
        {
            printf("Le gagnant est le joueur 2\n");
        }
        else if(points_joueur_2 == points_joueur_1)
        {
            printf("Vous avez obtenu le meme nombre de points\n");
        }
    }
    printf("C'EST FINI !\n");
    printf(" ");
    printf("Points totale pour joueur 1 est %d\n", total1);
    printf("Points totale pour joueur 2 est %d\n", total2);
    if(total1 > total2)
    {
        printf("Le gagnant est le joueur 1\n");
    }
    else if(total2 > total1)
    {
        printf("Le gagnant est le joueur 2\n");
    }
    else if(total2 == total1)
    {
        printf("Vous avez obtenu le meme nombre de points\n");
    }
    else if(total2 == 0 && total1 == 0)
    {
        printf("Aucun gagnant!\n");
    }
}

int main()
{
    srand (time(NULL));
    int valeur = rand() % 100 + 1;
    int valeur2 = rand() % 100 + 1;
    int choix;
    int reponse;
    int mode_de_jeu;
    printf("Choissisez votre mode de jeu.\n(1) Un joueur? entrez le chiffre 1. (2) Deux joueurs? entrez le chiffre 2. : ");
    scanf("%d", &mode_de_jeu);
    if (mode_de_jeu == 1)
    {
        printf("Choissisez votre mode de difficulté.\n(1) Facile? entrez le chiffre 1. (2) Moyen? entrez le chiffre 2. (3) Difficle? entrez le chiffre 3. : ");
        scanf("%d", &reponse);
        printf("Entrez un entier svp: ");
        scanf("%d", &choix);
        plus_moins(choix, valeur, reponse);
    }
    else if (mode_de_jeu == 2)
    {
        int joueur;
        int nombre_de_tour;
        printf("Bienvenu sur le mode de deux joueurs.\n");
        printf("Entrez le nombre de tour svp: ");
        scanf("%d", &nombre_de_tour);
        printf("Qui choisit le nombre de coup? Si c'est joueur 1, entrez le chiffre 1. Si c'est joueur 2, entrez le chifre 2. : ");
        scanf("%d", &joueur);
        int coup;
        int essaie_1;
        int essaie_2;
        int points_1;
        int points_2;
        essaie_1 = 0;
        essaie_2 = 0;
        deux_joueurs(choix, valeur,valeur2, joueur, nombre_de_tour, coup, essaie_1, essaie_2, points_1, points_2);
    }
    else
    {
        printf("Mode invalide\n");
    }
    return 0;
}


