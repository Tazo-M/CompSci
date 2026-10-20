#include <stdio.h>

// signed vs unsigned ints and chars
// short, long, long long

int main(void){
    signed int a = 123;
    signed int b = -123;
    signed int c = 0;

    printf("%d, %d, %d\n", a, b, c);

    unsigned int d = 123;
    unsigned int e = -123;
    unsigned int f = 0;

    printf("%u, %u, %u\n", d, e, f);

    // signed int A = 4294967295;    // doesn't work
    unsigned int B = 4294967295;
    // printf("%d, %u\n", A, B);
    printf("%u\n", B);



    long G = 9223372036854775807L;
    printf("%ld\n", G);
    unsigned long UG = 18446744073709551615UL;
    printf("%lu\n", UG);


    signed char bb= 'A';
    printf("%d\n", bb);

    unsigned char cc = 'A';
    printf("%u\n", cc);
}