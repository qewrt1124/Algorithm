#include <stdio.h>

int main(void) {
    int n;
    int sum = 0;
    char numbers[101];

    scanf("%d", &n);
    scanf("%s", numbers);

    for (int i = 0; i < n; i++) {
        sum += (numbers[i] - '0');
    }
    printf("%d", sum);
    return 0;
}