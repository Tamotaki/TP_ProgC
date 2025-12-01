#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int main(void) {
    int tab[N];
    int i, j, tmp;

    srand(time(NULL));

    /* Remplir et afficher tableau non trié */
    printf("Tableau non trie :\n");
    for (i = 0; i < N; i++) {
        tab[i] = rand() % 2001 - 1000;  /* par ex. entre -1000 et 1000 */
        printf("%d ", tab[i]);
    }
    printf("\n");

    /* Tri à bulles */
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - 1 - i; j++) {
            if (tab[j] > tab[j + 1]) {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }

    /* Afficher tableau trié */
    printf("Tableau trie par ordre croissant :\n");
    for (i = 0; i < N; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
