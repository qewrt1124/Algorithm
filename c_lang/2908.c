#include <stdio.h>

int main() {
    char num[4];
    int changed_num[2] = { 0 };

    for (int i = 0; i < 2; i++) {
        scanf("%s", num);
        for (int j = 0, k = 1; j < 3; j++, k *= 10) {
            changed_num[i] += ((num[j] - 48) * k);
        }
    }

    if (changed_num[0] > changed_num[1]) {
        printf("%d", changed_num[0]);
    }
    else {
        printf("%d", changed_num[1]);
    }
    return 0;
}