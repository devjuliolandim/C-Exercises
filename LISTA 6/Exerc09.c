#include <stdio.h>

int main() {
    char string[100];

    printf("Digite uma string: ");
    scanf("%[^\n]s", string);

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] -= 32;
        }
    }

    printf("String maiuscula: %s\n", string);

    return 0;
}

