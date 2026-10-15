#include <stdio.h>
#include <stdlib.h>

// byte buffer function via malloc, realloc and length field. include empty input and allocation failure handling.


int byte_buffer(int length);

int main(void){

    int result = byte_buffer(10);

    if (result!=0){
        printf("Operation Failed!\n");
        return 1;
    }

    return 0;
}

int byte_buffer(int length){
    int i;
    

    if(length<=0){
        printf("Error, invalid size for allocation\n");
        return 1;
    }

    int *p = malloc(sizeof *p *length);

    if(p == NULL){
        printf("Error allocating %d ints\n", length);
        return 1;
    }

    for(i=0; i<length; i++){
        p[i] = i+1;
    }

    for(i=0; i<length; i++){
        printf("%d\n",p[i]);
    }

    printf("%s\n", "Now let's reallocate it and increase the size 2 fold!");

    int new_length = length*2;

    int *new_p = realloc(p, (sizeof *p)*new_length);

    if (new_p == NULL){
        printf("%s\n", "NULL warning!");
        free(p);
        return 1;
    }

    p=new_p;

    for(i=length; i<(new_length); i++){
        p[i] = i+1;
    }

    for(i=0; i<(new_length); i++){
        printf("%d\n", p[i]);
    }

    free(p);
    return 0;
}