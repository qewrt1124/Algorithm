#include <stdio.h>
#include <memory.h>

int main(void) {
    char word[101] = { 0 };
    int alphabet[26];
    memset(alphabet, -1, 26 * sizeof(int));

    scanf("%s", word);
    for (int i = 0; i < 101 && word[i]; i++) {
        if (alphabet[word[i] - 97] == -1) {
            alphabet[word[i] - 97] = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", alphabet[i]);
    }

    return 0;
}