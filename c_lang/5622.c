#include <stdio.h>

int word_num(char A) {
    int matched_num = 0;

    if (65 <= A && A < 68) matched_num = 2;
    if (68 <= A && A < 71) matched_num = 3;
    if (71 <= A && A < 74) matched_num = 4;
    if (74 <= A && A < 77) matched_num = 5;
    if (77 <= A && A < 80) matched_num = 6;
    if (80 <= A && A < 84) matched_num = 7;
    if (84 <= A && A < 87) matched_num = 8;
    if (87 <= A && A < 91) matched_num = 9;

    return matched_num;
}

int main() {
    int sum = 0;
    char words[16];
    scanf("%s", words);

    for (int i = 0; words[i]; i++) {
        sum += word_num(words[i]) + 1;
    }

    printf("%d", sum);
    return 0;
}