#include <stdio.h>
#include <stdlib.h>
#include "operator.h"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage : %s <operateur> <num1> <num2>\n", argv[0]);
        return 1;
    }

    char op = argv[1][0];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);

    int res = calculer(num1, num2, op);
    printf("Resultat : %d\n", res);

    return 0;
}
