#include <stdio.h>

int main(void) {
    int arr[42] = {};
    int i;
    int n;
    int cnt = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &n);

        arr[n % 42]++;
    }

    for (i = 0; i < 42; i++) {
        if (arr[i]) {
            cnt++;
        }
    }

    printf("%d", cnt);
}