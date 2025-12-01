#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int main(void) {
    int tab[N];
    int i;
    int min, max;

    srand(time(NULL));

    for (i = 0; i < N; i++) {
        tab[i] = 1 + rand() % 1000;  /* 1 à 1000 */
    }

    min = tab[0];
    max = tab[0];

    for (i = 1; i < N; i++) {
        if (tab[i] < min) min = tab[i];
        if (tab[i] > max) max = tab[i];
    }

    printf("Le numero le plus grand est : %d\n", max);
    printf("Le numero le plus petit est : %d\n", min);

    return 0;
}
