#include <stdio.h>

int main(void) {
    int n;
    char word[1001];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", word);
        printf("%c", word[0]);
        for (int j = 1; j < 1001; j++) {
            if (!word[j]) {
                printf("%c\n", word[j - 1]);
                break;
            }
        }
    }
    return 0;
}