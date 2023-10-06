#include <stdio.h>
#include <string.h>

int main() {

    char name[225];
    int umur;
    char enter;

    printf("Masukan nama kamu : ");
    scanf("%s", name);
    // fgets(name, 225, stdin);
    // name[strcspn(name, "\n")] = 0;

    printf("Masukan umur kamu : ");
    scanf("%d", &umur);


    printf("name = %s\n", name);
    printf("umur = %d\n", umur);
    
}