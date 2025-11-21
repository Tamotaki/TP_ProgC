#include <stdio.h>

int main() {
    int compteur = 5; // changer cette valeur (<10) pour tester différentes tailles
    int i, j;

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

    return 0;
}
