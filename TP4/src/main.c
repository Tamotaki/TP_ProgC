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
