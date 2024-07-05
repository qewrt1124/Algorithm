#include <stdio.h>

int main() {
    int n, m;
    char word[21];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %s", &m, word);
        for (int j = 0; word[j]; j++) {
            for (int k = 0; k < m; k++) {
                printf("%c", word[j]);
            }
        }
        printf("\n");
    }
    return 0;
}