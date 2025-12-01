#include <stdio.h>
#include "fichier.h"

void lire_fichier(const char *nom_de_fichier) {
    FILE *f = fopen(nom_de_fichier, "r");
    if (!f) {
        printf("Erreur : impossible d'ouvrir %s\n", nom_de_fichier);
        return;
    }
    int c;
    while ((c = fgetc(f)) != EOF) {
        putchar(c);
    }
    fclose(f);
}

void ecrire_dans_fichier(const char *nom_de_fichier, const char *message) {
    FILE *f = fopen(nom_de_fichier, "a");
    if (!f) {
        printf("Erreur : impossible d'ouvrir %s\n", nom_de_fichier);
        return;
    }
    fprintf(f, "%s\n", message);
    fclose(f);
}
