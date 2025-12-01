#include <stdio.h>

void afficher_octets(void *p, size_t taille) {
    unsigned char *octets = (unsigned char *)p;
    for (size_t i = 0; i < taille; i++) {
        printf("%02x ", octets[i]);
    }
    printf("\n");
}

int main(void) {
    short s = 0x0302;
    int i = 0x04030201;
    long int l = 0x0807060504030201L;
    float f = 3.14f;
    double d = 3.14;
    long double ld = 3.14L;

    printf("Octets de short :\n");
    afficher_octets(&s, sizeof(s));

    printf("Octets de int :\n");
    afficher_octets(&i, sizeof(i));

    printf("Octets de long int :\n");
    afficher_octets(&l, sizeof(l));

    printf("Octets de float :\n");
    afficher_octets(&f, sizeof(f));

    printf("Octets de double :\n");
    afficher_octets(&d, sizeof(d));

    printf("Octets de long double :\n");
    afficher_octets(&ld, sizeof(ld));

    return 0;
}
