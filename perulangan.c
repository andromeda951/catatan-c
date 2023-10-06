#include <stdio.h>

int main(void) {
    
    int i = 0; 
    while (i < 2) {
        printf("i is %d.\n", i);    // i bisa diganti dengan i++ dan baris 8 di hapus
        i++;
    }

    // i=0  true  print 0   i=1
    // i=1  true  print 1   i=2
    // i=2  false
    
    while (i > 0) {
        printf("i is %d.\n", --i);
    }

    // i=2 true  print 1  (i=1)
    // i=1 true  print 0  (i=0)
    // i=0 false
    

}