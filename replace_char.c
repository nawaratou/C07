// replace_char.c
#include <stdio.h>

int main() {
    char str[200];
    char cible, remplacement;
    int i = 0;

    // Lire la chaîne et les deux caractères
    scanf(" %[^\n]", str);
    scanf(" %c %c", &cible, &remplacement);

    // Remplacer caractère par caractère
    while (str[i] != '\0') {
        if (str[i] == cible) {
            str[i] = remplacement;
        }
        i++;
    }

    printf("Résultat : %s\n", str);
    return 0;
}
