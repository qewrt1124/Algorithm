#include <stdio.h>

int main() {
    char words[5][16] = { 0 };

    for (int i = 0; i < 5; i++) {
        scanf("%s", words[i]);
    }

    for (int j = 0; j < 15; j++) {
        for (int i = 0; i < 5; i++) {
            if (words[i][j] == '\0') continue;
            printf("%c", words[i][j]);
        }
    }

    return 0;
}