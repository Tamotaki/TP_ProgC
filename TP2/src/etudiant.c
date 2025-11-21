#include <stdio.h>

int main() {
    char noms[5][50] = {"Dupont", "Martin", "Durand", "Petit", "Moreau"};
    char prenoms[5][50] = {"Marie", "Pierre", "Luc", "Sophie", "Jean"};
    char adresses[5][100] = {
        "20, Bd Niels Bohr, Lyon",
        "22, Bd Niels Bohr, Lyon",
        "24, Bd Niels Bohr, Lyon",
        "26, Bd Niels Bohr, Lyon",
        "28, Bd Niels Bohr, Lyon"
    };
    float notes_prog[5] = {16.5, 14.0, 12.5, 15.0, 13.0};
    float notes_sys[5] = {12.1, 14.1, 13.5, 15.2, 14.0};

    for(int i=0; i<5; i++) {
        printf("Etudiant %d:\nNom: %s\nPrenom: %s\nAdresse: %s\nNote Prog: %.1f\nNote Sys: %.1f\n\n",
               i+1, noms[i], prenoms[i], adresses[i], notes_prog[i], notes_sys[i]);
    }

    return 0;
}
