#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Couleur;

typedef struct {
    Couleur c;
    int nb;
} CouleurComptee;

/* comparaison d'égalité de deux couleurs */
int couleurs_egales(Couleur c1, Couleur c2) {
    return c1.r == c2.r && c1.g == c2.g && c1.b == c2.b && c1.a == c2.a;
}

int main(void) {
    Couleur tab[N];
    CouleurComptee distinctes[N];
    int nb_distinctes = 0;
    int i, j;
    int trouve;

    srand(time(NULL));

    /* Remplir le tableau de couleurs aléatoires */
    for (i = 0; i < N; i++) {
        tab[i].r = rand() % 256;
        tab[i].g = rand() % 256;
        tab[i].b = rand() % 256;
        tab[i].a = 0xff;          /* par ex. alpha fixe */
    }

    /* Comptage des couleurs distinctes */
    for (i = 0; i < N; i++) {
        trouve = 0;
        for (j = 0; j < nb_distinctes; j++) {
            if (couleurs_egales(tab[i], distinctes[j].c)) {
                distinctes[j].nb++;
                trouve = 1;
                break;
            }
        }
        if (!trouve) {
            distinctes[nb_distinctes].c = tab[i];
            distinctes[nb_distinctes].nb = 1;
            nb_distinctes++;
        }
    }

    /* Affichage du résultat */
    for (i = 0; i < nb_distinctes; i++) {
        printf("%02x %02x %02x %02x : %d\n",
               distinctes[i].c.a,
               distinctes[i].c.r,
               distinctes[i].c.g,
               distinctes[i].c.b,
               distinctes[i].nb);
    }

    return 0;
}
