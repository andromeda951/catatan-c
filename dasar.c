#include <stdio.h>
#include <stdbool.h>        // untuk tipe data bool tapi format inputnya tidak ada jadi gunakan int

int main() {

    // declaration
    int x;                 
    double y;             
    char bloodType;       
    bool meried; // tipe data bool harus #include <stdbool.h>
    char name[225] = "Andromeda";   // khusus untuk array of char, harus langsung diinisialisasi nilainya

    // inisialitation
    x = 5;
    y = 10.2;
    meried = false;
    bloodType = 'A';

    // declaration dan sekaligus inisialitation
    int number = 12;
    char class = 'C';
    char address[255] = "Korea Selatan";

    // constanta
    const double PI = 3.14;             // nilai PI tidak boleh diganti
    // PI = 5.5  // ERROR

    // operator assignment
    int i, j;           // boleh deklarasi lebih dari satu variabel sekaligus
    i = 5;
    j = 3;
    i = (i + j) * 2;    // operator lain  =>    + - * / %


    printf("%d\n", x);
    printf("%f\n", y);
    printf("%d\n", meried);             // 1 == true atau 0 == false
    printf("%c\n", bloodType);
    printf("%s\n", name);
    printf("%s\n", address);

    printf("\n");
    printf("Nama saya");
    printf("Andromeda\n");

    printf("%s          %s  %c\n", name, address, bloodType);

    printf("nilai x = %d\n", x);
    printf("x = %d, y = %f\n", x, y);

    printf("PI = %.2f\n", PI);
}



// variabel
// tipe data udah
// constanta
// input dan output
// assignment




// #include <stdio.h>

// int main() {

//     int x = 5;

//     printf("nilai x = %d\n", x);

//     x = 7;
//     x = x + 1;
//     printf("nilai x baru = %d\n", x);

//     x = 1;
// }





// #include <stdio.h>

// int main() {

//     int lebar, pajang;

//     printf("Program Hitung Luas\n");
//     printf("masuakan panjang : ");
//     scanf("%d", &pajang);
//     printf("masuakan lebar : ");
//     scanf("%d", &lebar);

//     int luas = pajang * lebar;
//     printf("Luas = %d\n", luas);

// }



// #include <stdio.h>

// int main() {

//     // deklarasi variabel
//     int x;
//     double y;
//     char bloodType;
//     char name[100] = "Andromeda";

//     // inisialisasi variabel
//     x = 5;
//     x = 7 + 5;
//     y = 1.7;
//     bloodType = 'A';

//     // deklarasi & inisialisai
//     int number = 5;

//     // konstanta
//     const double PI = 3.14;
//     // PI = 3.145; ERROR
    

//     printf("%d\n", x);
//     printf("%f\n", y);
//     printf("%d\n", number);
//     printf("%c\n", bloodType);
//     printf("%s\n", name);
//     printf("%f\n\n", PI);

//     printf("nilai x = %d\n", x);
//     printf("%d  %f\n", x, y);
//     printf("x = %d, y = %f\n", x, y);
//     printf("PI = %.1f\n", PI);

// }