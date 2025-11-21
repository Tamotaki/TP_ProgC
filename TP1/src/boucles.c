#include <stdio.h>

int main() {
    int compteur = 5; // changer cette valeur pour tester différentes tailles
    int i, j;

    printf("Version avec boucle for :\n");
    for (i = 1; i <= compteur; i++) {
        for (j = 1; j <= i; j++) {
            if (i % 2 == 0 && j % 2 == 0) {
                printf("# ");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    printf("\nVersion avec boucle while :\n");
    i = 1;
    while (i <= compteur) {
        j = 1;
        while (j <= i) {
            if (i % 2 == 0 && j % 2 == 0) {
                printf("# ");
            } else {
                printf("* ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
