#include <stdio.h>

int main() {
    int binary, onesComplement = 0, twosComplement = 0, place = 1;

    printf("Enter a binary number: ");
    fflush(stdout);     // <- Had an issue with my computer. Works fine even without this line... Hehe...
    scanf("%d", &binary);

    int temp = binary;
    int carry = 1;

    while (temp > 0) {
        int digit = temp % 10;
        int flippedDigit = (digit == 0) ? 1 : 0;

        if (flippedDigit + carry == 2) {
            twosComplement += 0 * place;
            carry = 1;
        } else {
            twosComplement += (flippedDigit + carry) * place;
            carry = 0;
        }

        place *= 10;
        temp /= 10;
    }

    printf("2's Complement: %d\n", twosComplement);

    return 0;
}
