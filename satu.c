#include <stdio.h>

int power(int, int);

int main(void) {
    int base = 5, exp = 3;

    printf("The %dth power of %d is %d.\n", exp, base, power(base, exp));
    
    return 0;
}

int power(int base, int exp) {

    int pow = 1;

    for (int i=0; i<exp; i++) {
        pow = pow * base;
    }

    return pow;
}

// pow = 1
// i=0  true  pow=1*5=5
// i=1  true  pow=5*5=25
// i=2  true  pow=25*5=125
// i=3  false

// return 125





// 5^3 = 5 * 5 * 5 = 125

