#include <stdio.h>

#define N 100

int main(void) {
    int tab[N];
    int i, x;
    int gauche, droite, milieu;
    int trouve = 0;

    /* Construire un tableau trié simple, par ex. 0,1,2,...,99 */
    for (i = 0; i < N; i++) {
        tab[i] = i;     /* ou autre suite croissante */
    }

    printf("Tableau trie :\n");
    for (i = 0; i < N; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &x);

    gauche = 0;
    droite = N - 1;

    while (gauche <= droite && !trouve) {
        milieu = (gauche + droite) / 2;

        if (tab[milieu] == x) {
            trouve = 1;
        } else if (tab[milieu] < x) {
            gauche = milieu + 1;
        } else {
            droite = milieu - 1;
        }
    }

    if (trouve)
        printf("entier present\n");
    else
        printf("entier absent\n");

    return 0;
}
