#include <stdio.h>
#include <stdlib.h>

int byte_buffer(int);

int main (void){
    if(byte_buffer(10)==1){
        printf("Eror!\n");
        return 1;
    }
    else{
        printf("Success!\n");
        return 0;
    }
}

int byte_buffer(int length){

    int i=0;

    if(length<=0){
        printf("Innadequate Length!\n");
        return 1;
    }

    int *p = malloc(length*sizeof(int));

    if(p==NULL){
        printf("Allocation Failure!");
        return 1;
    }

    for(i=1; i<=length; i++){
        p[i-1]=i;
    }

    for(i=0; i<length; i++){
        printf("%d\n", p[i]);
    }

    int *new_p = realloc(p, (length*sizeof(int))*2);

    if(new_p==NULL){
        printf("Reallocation Error!");
        free(p);
        return 1;
    }

    p=new_p;
    
    for(i=length+1; i<=(length*2); i++){
        p[i-1]=i;
    }

    // printf("End of check\n\n\n");

    for(i=0; i<(length*2); i++){
        printf("%d\n", p[i]);
    }
    
    free(p);

    return 0;
}