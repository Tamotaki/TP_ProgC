#include <stdio.h>
#include <string.h>

int compter_occurrences(const char *ligne, const char *motif) {
    int count = 0;
    const char *p = ligne;
    size_t len = strlen(motif);

    if (len == 0) return 0;

    while ((p = strstr(p, motif)) != NULL) {
        count++;
        p += len;
    }
    return count;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage : %s <fichier>\n", argv[0]);
        return 1;
    }

    char phrase[256];
    char ligne[1024];
    FILE *f = fopen(argv[1], "r");
    if (!f) {
        printf("Erreur : impossible d'ouvrir %s\n", argv[1]);
        return 1;
    }

    printf("Entrez la phrase que vous souhaitez rechercher : ");
    if (!fgets(phrase, sizeof(phrase), stdin)) {
        fclose(f);
        return 1;
    }
    phrase[strcspn(phrase, "\n")] = '\0';

    int num_ligne = 0;
    printf("\nResultats de la recherche :\n");
    while (fgets(ligne, sizeof(ligne), f)) {
        num_ligne++;
        int n = compter_occurrences(ligne, phrase);
        if (n > 0) {
            printf("Ligne %d, %d fois\n", num_ligne, n);
        }
    }

    fclose(f);
    return 0;
}
