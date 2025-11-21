#include <stdio.h>

int main() {
    char s1[] = "Hello";
    char s2[] = " World!";
    char copie[100];
    char concat[200];

    // Calcul longueur
    int len1 = 0, len2 = 0;
    while(s1[len1] != '\0') len1++;
    while(s2[len2] != '\0') len2++;
    printf("Longueur s1: %d, s2: %d\n", len1, len2);

    // Copier s1 dans copie
    int i=0;
    while(s1[i] != '\0') {
        copie[i] = s1[i];
        i++;
    }
    copie[i] = '\0';
    printf("Copie de s1: %s\n", copie);

    // Concaténer s1 et s2 dans concat
    i=0;
    int j=0;
    while(s1[i] != '\0') {
        concat[i] = s1[i];
        i++;
    }
    while(s2[j] != '\0') {
        concat[i++] = s2[j++];
    }
    concat[i] = '\0';
    printf("Concaténation: %s\n", concat);

    return 0;
}
