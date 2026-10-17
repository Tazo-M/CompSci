#include <stdio.h>

int add_bonus(int points){
    int bonus = 3;
    int total = points + bonus;
    return total;
}

int main(void){
    int score = 7;
    // int *view = &score;
    score = add_bonus(score);
    // printf("%d\n", *view);
    printf("%d\n", score);
    return 0;
}