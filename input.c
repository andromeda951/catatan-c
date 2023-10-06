#include <stdio.h>

int main() {

    int x;                 
    double y;
    float z;                          
    char bloodType;       
    int meried;                    // INI PAKAI int BUKAN bool
    char name[225];
    char enter;

    scanf("%d %lf", &x, &y);       // %lf : long float=double
    scanf("%f", &z);
    scanf("%c", &enter);
    scanf("%c", &bloodType);
    scanf("%d", &meried);
    scanf("%s", name);                      // HANYA MEMBACA SATU KATA
    // scanf("%c", &enter);
    // fgets(name, 225, stdin);

    printf("\n");

    printf("X = %d      Y = %.2f    Z = %.2f\n", x, y, z);
    printf("blood type = %c\n", bloodType);
    printf("meried = %d\n", meried);
    printf("name = %s\n", name);
    
}