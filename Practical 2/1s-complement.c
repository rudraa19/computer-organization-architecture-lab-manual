#include <stdio.h>

int main() {
    int binary, onesComplement = 0, place = 1;

    printf("Enter a binary number: ");
    fflush(stdout);     // <- Had an issue with my computer. Works fine even without this line... Hehe...
    scanf("%d", &binary);

    while (binary > 0) {
        int digit = binary % 10;
        onesComplement += (digit == 0 ? 1 : 0) * place;
        place *= 10;
        binary /= 10;
    }

    printf("1's Complement: %d\n", onesComplement);

    return 0;
}
