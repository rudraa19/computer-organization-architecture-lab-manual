#include <stdio.h>
#include <math.h>
int main() {
    int binary;
    int decimal = 0;
    int place = 0;

    printf("Enter binary number: ");
    fflush(stdout);     // <- Had an issue with my computer. Works fine even without this line... Hehe...
    scanf("%d", &binary);

    while (binary != 0) {
        decimal += (binary % 10) * pow(2, place);
        binary /= 10;
        place++;
    }

    printf("Your decimal number is: %d\n", decimal);
    

    return 0;
}