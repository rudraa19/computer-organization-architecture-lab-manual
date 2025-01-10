#include <stdio.h>

int main() {
    int decimal;
    int binary = 0;
    int place = 1;

    printf("Enter your decimal number: ");
    fflush(stdout);     // <- Had an issue with my computer. Works fine even without this line... Hehe...
    scanf("%d", &decimal);

    while (decimal != 0) {
        int remainder = decimal % 2;
        binary += remainder * place;
        decimal = decimal / 2;
        place *= 10;
    }

    printf("Your binary number is: %d\n", binary);
    
    return 0;
}
