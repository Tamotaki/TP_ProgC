#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérations arithmétiques
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b); // %% pour afficher le symbole %

    // Comparaisons (résultat sous forme de booléen 0 ou 1)
    printf("a == b : %d\n", a == b);
    printf("a > b : %d\n", a > b);

    return 0;
}
