#include <stdio.h>

// how to get the amount of elements in an array, how arrays are passed into functions, 
// what the pointer points to and why size cannot be found the same way in functions.

void pass_arr(int *p);

int main(void){
    int a[7] = {413, 253, 642, 876, 935, 123, 234};
    // long unsigned int i=0;

    // printf("%ld\n", sizeof(a[0]));
    // printf("%ld\n", sizeof(a));
    // printf("%ld\n", sizeof(a)/sizeof(a[0]));

    // for (i=0; i < (sizeof(a)/sizeof(a[0])); i++){
    //     printf("%d\n", a[i]);
    // }
    pass_arr(a);
    // pass_arr(a[]);
    // pass_arr(a[7]);
}

void pass_arr(int *p){
    printf("%d\n", *p);
    printf("%d\n", p[0]);
    printf("%d\n", p[3]);

    printf("%ld\n", sizeof(p));
    printf("%ld\n", sizeof(*p));
}