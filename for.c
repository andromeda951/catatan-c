#include <stdio.h>

int main() {

    // Looping for, while, do while

    // int i;
    // for (int i=1; i<=5; i++) {
    //     printf("hello\n");
    // }

    // i=1  true  print hello
    // i=2  true  print hello
    // i=3  true  print hello
    // i=4  true  print hello
    // i=5  true  print hello
    // i=6  false


    // for (int i=1; i<=5; i++) {
    //     printf("hello\n");
    //     printf("hello eden\n");
    // }


    // for (int i=1; i<=5; i++) {
    //     printf("%d\n", i);
    // }

    // for (int i=1; i<=10; i++) {
    //     printf("i = %d\n", i);
    // }


    // for (int i=3; i<=10; i++) {
    //     printf("i = %d\n", i);
    // }

    // int n = 8;
    // for (int i=0; i<n; i++) {
    //     printf("i = %d\n", i);
    // }


    // 3 + 3+ 3+ 3+ 3
    // int sum = 0;
    // for (int i=1; i<=5; i++) {
    //     sum = sum + 3;
    // }
    // printf("sum = %d\n", sum);

    // i=1  true  sum=0+3=3
    // i=2  true  sum=3+3=6
    // i=3  true  sum=6+3=9
    // i=4  true  sum=9+3=12
    // i=5  true  sum=12+3=15
    // i=6  false


    // 1+2+3+4 = 10
    // int sum = 0;
    // for (int i=1; i<=4; i++) {
    //     sum = sum + i;
    // }
    // printf("sum = %d\n", sum);


    // input user
    int sum = 0, x;
    for (int i=1; i<=4; i++) {
        scanf("%d", &x);
        sum = sum + x;
    }
    printf("sum = %d\n", sum);



    // int i;
    // for (int i=5; i>=1; i--) {
    //     printf("hello\n");
    // }

    // i=5  true  print hello
    // i=4  true  print hello
    // i=3  true  print hello
    // i=2  true  print hello
    // i=1  true  print hello
    // i=0  false

    // int i;
    // for (int i=5; i>=1; i--) {
    //     printf("%d\n", i);
    // }


    // int i = 5;
    // int x = --i;

    // int j = 5;
    // int y = j--;

    // printf("x = %d,  i = %d\n", x, i);
    // printf("y = %d,  j = %d\n", y, j);



}