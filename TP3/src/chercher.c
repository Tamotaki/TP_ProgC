#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int main(void) {
    int tab[N];
    int i, x;
    int trouve = 0;

    srand(time(NULL));

    printf("Tableau :\n");
    for (i = 0; i < N; i++) {
        tab[i] = rand() % 201 - 100;   /* par ex. entre -100 et 100 */
        printf("%d ", tab[i]);
    }
    printf("\n");

    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &x);

    for (i = 0; i < N; i++) {
        if (tab[i] == x) {
            trouve = 1;
            break;
        }
    }

    if (trouve)
        printf("entier present\n");
    else
        printf("entier absent\n");

    return 0;
}
