#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tabInt[10];
    float tabFloat[10];

    srand(time(NULL));

    for(int i=0; i<10; i++) {
        *(tabInt+i) = rand()%100;
        *(tabFloat+i) = (rand()%1000)/100.0f;
    }

    printf("Tableau int avant multiplication:\n");
    for(int i=0;i<10;i++) printf("%d ", *(tabInt+i));
    printf("\nTableau float avant multiplication:\n");
    for(int i=0;i<10;i++) printf("%.2f ", *(tabFloat+i));
    printf("\n");

    for(int i=0;i<10;i++) {
        if(i%2==0) *(tabInt+i) *= 3;
        if(i%2==0) *(tabFloat+i) *= 3;
    }

    printf("Tableau int après multiplication:\n");
    for(int i=0;i<10;i++) printf("%d ", *(tabInt+i));
    printf("\nTableau float après multiplication:\n");
    for(int i=0;i<10;i++) printf("%.2f ", *(tabFloat+i));
    printf("\n");

    return 0;
}
