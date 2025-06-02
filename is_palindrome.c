// is_palindrome.c
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, est_palindrome = 1;

    scanf(" %[^\n]", str);

    // Trouver la longueur
    while (str[i] != '\0') {
        i++;
    }

    j = i - 1; // j au dernier caractère
    i = 0;     // i au début

    while (i < j) {
        if (str[i] != str[j]) {
            est_palindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (est_palindrome) {
        printf("La chaîne est un palindrome.\n");
    } else {
        printf("La chaîne n'est pas un palindrome.\n");
    }

    return 0;
}
