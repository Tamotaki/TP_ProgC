#include <stdio.h>
#include "operator.h"
#include "fichier.h"
#include "liste.h"

/* Protos des fonctions d'entrée */
void exercice_41(void);
void exercice_42(void);
void exercice_47(void);

int main(void) {
    int choix = 0;

    printf("Choisir l'exercice a executer :\n");
    printf("1 - Exercice 4.1 (operateurs)\n");
    printf("2 - Exercice 4.2 (fichiers)\n");
    printf("3 - Exercice 4.7 (liste de couleurs)\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            exercice_41();
            break;
        case 2:
            exercice_42();
            break;
        case 3:
            exercice_47();
            break;
        default:
            printf("Choix invalide.\n");
            break;
    }

    return 0;
}
void exercice_41(void) {
    int num1, num2;
    char op;

    printf("Entrez num1 : ");
    scanf("%d", &num1);
    printf("Entrez num2 : ");
    scanf("%d", &num2);
    printf("Entrez l'operateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);

    int res = calculer(num1, num2, op);
    printf("Resultat : %d\n", res);
}
void exercice_42(void) {
    int choix;
    char nom[256];
    char message[512];

    while (1) {
        printf("\nQue souhaitez-vous faire ?\n");
        printf("1. Lire un fichier\n");
        printf("2. Ecrire dans un fichier\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        getchar(); /* consommer le \n */

        if (choix == 0) break;

        if (choix == 1) {
            printf("Entrez le nom du fichier a lire : ");
            fgets(nom, sizeof(nom), stdin);
            nom[strcspn(nom, "\n")] = '\0';
            printf("Contenu du fichier %s :\n", nom);
            lire_fichier(nom);
        } else if (choix == 2) {
            printf("Entrez le nom du fichier dans lequel vous souhaitez ecrire : ");
            fgets(nom, sizeof(nom), stdin);
            nom[strcspn(nom, "\n")] = '\0';
            printf("Entrez le message a ecrire : ");
            fgets(message, sizeof(message), stdin);
            message[strcspn(message, "\n")] = '\0';
            ecrire_dans_fichier(nom, message);
            printf("Le message a ete ecrit dans le fichier %s.\n", nom);
        } else {
            printf("Choix invalide.\n");
        }
    }
}
void exercice_47(void) {
    ListeCouleurs ma_liste;
    init_liste(&ma_liste);

    Couleur c1 = {0xFF, 0x00, 0x00, 0xFF};
    Couleur c2 = {0x00, 0xFF, 0x00, 0xFF};
    Couleur c3 = {0x00, 0x00, 0xFF, 0xFF};

    insertion(&c1, &ma_liste);
    insertion(&c2, &ma_liste);
    insertion(&c3, &ma_liste);

    printf("Liste des couleurs :\n");
    parcours(&ma_liste);
}
