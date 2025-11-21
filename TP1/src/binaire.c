#include <stdio.h>

void afficherBinaire(unsigned int n) {
    int i;
    int debut = 0; // Pour ignorer les zéros non significatifs
    for(i = 31; i >= 0; i--) {
        unsigned int bit = (n >> i) & 1;
        if(bit) debut = 1;
        if(debut)
            printf("%u", bit);
    }
    if(!debut) printf("0"); // Si n == 0
    printf("\n");
}

int main() {
    unsigned int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres)/sizeof(nombres[0]);

    for(int i = 0; i < taille; i++) {
        printf("%u en binaire : ", nombres[i]);
        afficherBinaire(nombres[i]);
    }

    return 0;
}
