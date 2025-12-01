#ifndef LISTE_H
#define LISTE_H

typedef struct couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Couleur;

typedef struct noeud_couleur {
    Couleur c;
    struct noeud_couleur *suivant;
} NoeudCouleur;

typedef struct {
    NoeudCouleur *tete;
} ListeCouleurs;

void init_liste(ListeCouleurs *l);
void insertion(const Couleur *c, ListeCouleurs *l);
void parcours(const ListeCouleurs *l);

#endif
