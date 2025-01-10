#include <stdio.h>

int main() {
    int decimalNumber;
    char hexDigits[] = "0123456789ABCDEF";
    char hex[50];
    int i = 0;

    printf("Enter a decimal number: ");
    fflush(stdout);     // <- Had an issue with my computer. Works fine even without this line... Hehe...
    scanf("%d", &decimalNumber);

    while (decimalNumber > 0) {
        int remainder = decimalNumber % 16;
        hex[i] = hexDigits[remainder];
        decimalNumber = decimalNumber / 16;
        i++;
    }

    printf("Your hexadecimal value is: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");

    return 0;
}
