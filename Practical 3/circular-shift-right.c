#include <stdio.h>
#include <string.h>

int main() {
    char binary[33];
    
    printf("Enter a binary number: ");
    scanf("%s", binary);

    int len = strlen(binary);

    char temp = binary[len - 1];
    for (int i = len - 1; i > 0; i--) {
        binary[i] = binary[i - 1];
    }
    binary[0] = temp;

    printf("Result after circular shift right: %s\n", binary);
    return 0;
}
