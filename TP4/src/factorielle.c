#include <stdio.h>

int factorielle(int num) {
    if (num == 0) {
        printf("fact(0): 1\n");
        return 1;
    } else {
        int valeur = num * factorielle(num - 1);
        printf("fact(%d): %d\n", num, valeur);
        return valeur;
    }
}

int main(void) {
    int n;

    printf("Entrez un entier >= 0 : ");
    scanf("%d", &n);

    int res = factorielle(n);
    printf("Factorielle de %d = %d\n", n, res);

    return 0;
}
