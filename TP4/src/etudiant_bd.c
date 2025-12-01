#include <stdio.h>
#include "fichier.h"

#define NB_ETUDIANTS 5

typedef struct {
    char nom[64];
    char prenom[64];
    char adresse[128];
    int note1;
    int note2;
} Etudiant;

int main(void) {
    Etudiant etudiants[NB_ETUDIANTS];
    char ligne[512];

    for (int i = 0; i < NB_ETUDIANTS; i++) {
        printf("Entrez les details de l'etudiant.e %d :\n", i + 1);

        printf("Nom : ");
        scanf(" %63[^\n]", etudiants[i].nom);
        getchar();

        printf("Prenom : ");
        scanf(" %63[^\n]", etudiants[i].prenom);
        getchar();

        printf("Adresse : ");
        scanf(" %127[^\n]", etudiants[i].adresse);
        getchar();

        printf("Note 1 : ");
        scanf("%d", &etudiants[i].note1);
        printf("Note 2 : ");
        scanf("%d", &etudiants[i].note2);
        getchar();

        snprintf(ligne, sizeof(ligne), "%s;%s;%s;%d;%d",
                 etudiants[i].nom,
                 etudiants[i].prenom,
                 etudiants[i].adresse,
                 etudiants[i].note1,
                 etudiants[i].note2);

        ecrire_dans_fichier("etudiant.txt", ligne);
    }

    printf("Les details des etudiants ont ete enregistres dans le fichier etudiant.txt.\n");
    return 0;
}
