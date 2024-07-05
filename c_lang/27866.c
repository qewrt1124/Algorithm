#include <stdio.h>

int main(void) {
    int n;
    char s_arr[1001];

    scanf("%s", s_arr);
    scanf("%d", &n);
    printf("%c", s_arr[n - 1]);
    return 0;
}