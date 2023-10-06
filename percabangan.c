#include <stdio.h>

int main() {
    
    int x = 5;

    // if doang
    // if (x % 2 == 0) {
    //     printf("genap\n");
    // }

    // x = 5
    // x % 2 == 0
    // 5 % 2 == 0
    // 1 == 0
    // false


    // if else
    x = 5;
    // if (x % 2 == 0) {
    //     printf("genap\n");
    //     printf("genap\n");
    // } else {
    //     printf("ganjil\n");
    //     printf("ganjil\n");
    // }


    // else if
    x = 0;
    // if (x > 0) {
    //     printf("positif\n");
    // } else if (x < 0) {
    //     printf("negatif\n");
    // } else if (x == 0) {          // ini bisa pakai else aja karena udah pasti x sama dengan 0
    //     printf("nol\n");
    // }


    // if nested
    x = 5;
    // if (x % 2 == 0)
    //     y += x/2;
    // else {
    //     if (x % 4 == 1)
    //         y += 2*(x+3/4);
    //     else
    //         y += (x+1)/2;
    // }


    // switch
    x = 4; 
    switch(x) {
        case 0:
            // printf("x is 0\n");
        case 1:
            // printf("x is 1\n");
        case 2:
            printf("x is less than 3.\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("x is less than 6.\n");
            break;
        default:
            printf("x is 6 or more.\n");
    }


}