#include <stdio.h>

int main(void) {
    int count = 0;
    char word[101];
    scanf("%s", word);
    for (int i = 0; i < 101; i++) {
        if (!word[i]) {
            printf("%d", count);
            break;
        }
        count++;
    }
    return 0;
}