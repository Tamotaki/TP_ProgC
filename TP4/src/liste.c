#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

void init_liste(ListeCouleurs *l) {
    l->tete = NULL;
}

void insertion(const Couleur *c, ListeCouleurs *l) {
    NoeudCouleur *n = malloc(sizeof(NoeudCouleur));
    if (!n) return;
    n->c = *c;
    n->suivant = l->tete;
    l->tete = n;
}

void parcours(const ListeCouleurs *l) {
    const NoeudCouleur *curr = l->tete;
    while (curr) {
        printf("Couleur : %02x %02x %02x %02x\n",
               curr->c.r, curr->c.g, curr->c.b, curr->c.a);
        curr = curr->suivant;
    }
}
