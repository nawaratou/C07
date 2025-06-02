// replace_char.c
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char ch1, ch2;

    // Lire toute la ligne : chaîne + 2 caractères
    scanf("%s %c %c", str, &ch1, &ch2);

    // Remplacer les occurrences de ch1 par ch2
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch1) {
            str[i] = ch2;
        }
    }

    // Affichage du résultat
    printf("Résultat : %s\n", str);
    return 0;
}
