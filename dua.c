#include <stdio.h>

void printm(int, int);

int main(void) {

    int row = 5, column = 5;

    printm(row, column);
    
    return 0;
}

void printm(int r, int c) {

    for (int i=1; i<=r*c; i++) {

        if (i % 2 == 1) {
            printf("X");
        } else {
            printf("O");
        }

        if (i % 5 == 0) {
            printf("\n");
        }    

    }
    
}


// XOXOX  i=4
// OXOXO  i=9
// XOXOX  i=14
// OXOXO  i=19
// XOXOX  i=24



