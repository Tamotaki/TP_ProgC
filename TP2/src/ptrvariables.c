#include <stdio.h>

int main() {
    int i = 42;
    float f = 3.14f;
    double d = 2.71828;

    int *pi = &i;
    float *pf = &f;
    double *pd = &d;

    printf("Avant manipulation:\n");
    printf("Adresse i: %p, Valeur i: %x\n", pi, i);
    printf("Adresse f: %p, Valeur f: %x\n", pf, *(unsigned int*)pf);
    printf("Adresse d: %p, Valeur d: %llx\n", pd, *(unsigned long long*)pd);

    // Manipulation
    *pi += 1;
    *pf *= 2;
    *pd += 1.0;

    printf("Après manipulation:\n");
    printf("Adresse i: %p, Valeur i: %x\n", pi, i);
    printf("Adresse f: %p, Valeur f: %x\n", pf, *(unsigned int*)pf);
    printf("Adresse d: %p, Valeur d: %llx\n", pd, *(unsigned long long*)pd);

    return 0;
}
