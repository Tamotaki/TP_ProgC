#include <stdio.h>

int main() {
    // char
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    printf("char c = %c\n", c);
    printf("signed char sc = %d\n", sc);
    printf("unsigned char uc = %u\n", uc);

    // short
    short s = -32000;
    unsigned short us = 65000;

    printf("short s = %d\n", s);
    printf("unsigned short us = %u\n", us);

    // int
    int i = -100000;
    unsigned int ui = 3000000000;

    printf("int i = %d\n", i);
    printf("unsigned int ui = %u\n", ui);

    // long int
    long int li = -2000000000L;
    unsigned long int uli = 4000000000UL;

    printf("long int li = %ld\n", li);
    printf("unsigned long int uli = %lu\n", uli);

    // long long int
    long long int lli = -9000000000000000000LL;
    unsigned long long int ulli = 18000000000000000000ULL;

    printf("long long int lli = %lld\n", lli);
    printf("unsigned long long int ulli = %llu\n", ulli);

    // float
    float f = 3.14f;
    printf("float f = %f\n", f);

    // double
    double d = 3.1415926535;
    printf("double d = %lf\n", d);

    // long double
    long double ld = 3.141592653589793238L;
    printf("long double ld = %Lf\n", ld);

    return 0;
}
