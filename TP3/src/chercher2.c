#include <stdio.h>

#define N 10
#define MAX_LEN 100

/* compare deux chaînes s1 et s2, retourne 0 si égales, 1 sinon */
int chaines_egales(const char *s1, const char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 0;
        }
        i++;
    }
    /* si on sort, elles sont égales seulement si les deux sont finies */
    return (s1[i] == '\0' && s2[i] == '\0');
}

int main(void) {
    const char *phrases[N] = {
        "Bonjour, comment ca va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journee.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent etre deroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est interessante.",
        "Les structures de donnees sont importantes.",
        "Programmer en C, c'est genial."
    };

    char recherche[MAX_LEN];
    int i;
    int trouve = 0;

    printf("Entrez la phrase a chercher :\n");
    /* lire une ligne entière, y compris les espaces */
    if (fgets(recherche, MAX_LEN, stdin) == NULL) {
        return 1;
    }

    /* enlever le '\n' final s'il existe */
    for (i = 0; recherche[i] != '\0'; i++) {
        if (recherche[i] == '\n') {
            recherche[i] = '\0';
            break;
        }
    }

    for (i = 0; i < N; i++) {
        if (chaines_egales(recherche, phrases[i])) {
            trouve = 1;
            break;
        }
    }

    if (trouve)
        printf("Phrase trouvee\n");
    else
        printf("Phrase non trouvee\n");

    return 0;
}
