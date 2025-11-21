#include <stdio.h>
#include <string.h>

typedef struct {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note_prog;
    float note_sys;
} Etudiant;

int main() {
    Etudiant etudiants[5];

    // Initialisation
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Bd Niels Bohr, Lyon");
    etudiants[0].note_prog = 16.5; etudiants[0].note_sys = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Bd Niels Bohr, Lyon");
    etudiants[1].note_prog = 14.0; etudiants[1].note_sys = 14.1;

    strcpy(etudiants[2].nom, "Durand");
    strcpy(etudiants[2].prenom, "Luc");
    strcpy(etudiants[2].adresse, "24, Bd Niels Bohr, Lyon");
    etudiants[2].note_prog = 12.5; etudiants[2].note_sys = 13.5;

    strcpy(etudiants[3].nom, "Petit");
    strcpy(etudiants[3].prenom, "Sophie");
    strcpy(etudiants[3].adresse, "26, Bd Niels Bohr, Lyon");
    etudiants[3].note_prog = 15.0; etudiants[3].note_sys = 15.2;

    strcpy(etudiants[4].nom, "Moreau");
    strcpy(etudiants[4].prenom, "Jean");
    strcpy(etudiants[4].adresse, "28, Bd Niels Bohr, Lyon");
    etudiants[4].note_prog = 13.0; etudiants[4].note_sys = 14.0;

    for(int i=0; i<5; i++) {
        printf("Etudiant %d:\nNom: %s\nPrenom: %s\nAdresse: %s\nNote Prog: %.1f\nNote Sys: %.1f\n\n",
               i+1, etudiants[i].nom, etudiants[i].prenom, etudiants[i].adresse,
               etudiants[i].note_prog, etudiants[i].note_sys);
    }

    return 0;
}
