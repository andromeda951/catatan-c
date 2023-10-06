#include <stdio.h>

int main() {

    int lebar, pajang;

    printf("Program Hitung Luas\n");
    printf("masuakan panjang : ");
    scanf("%d", &pajang);
    printf("masuakan lebar : ");
    scanf("%d", &lebar);

    int luas = pajang * lebar;
    printf("Luas = %d\n", luas);

}
