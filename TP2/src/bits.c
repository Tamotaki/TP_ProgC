#include <stdio.h>

int main() {
    unsigned int d = 0x1008; // exemple
    int bit4 = (d >> (32 - 4)) & 1;
    int bit20 = (d >> (32 - 20)) & 1;

    if(bit4 && bit20)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
