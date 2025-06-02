// count_words.c
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, mots = 0;

    scanf(" %[^\n]", str);

    while (str[i] != '\0') {
        if ((str[i] != ' ' && (str[i+1] == ' ' || str[i+1] == '\0'))) {
            mots++;
        }
        i++;
    }

    printf("Nombre de mots : %d\n", mots);
    return 0;
}
