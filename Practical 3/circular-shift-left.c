#include <stdio.h>
#include <string.h>

int main() {
    char binary[33];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    int len = strlen(binary);

    char temp = binary[0];
    for (int i = 0; i < len - 1; i++) {
        binary[i] = binary[i + 1];
    }
    binary[len - 1] = temp;

    printf("Result after circular shift left: %s\n", binary);
    return 0;
}
