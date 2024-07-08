#include <stdio.h>

int main() {
    int n, x, y;
    int x_arr[101] = { 0 };
    int y_arr[101] = { 0 };
    int max_x = 0, max_y = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        x_arr[x] = 1;
        y_arr[y] = 1;
        x_arr[x + 10] = 1;
        y_arr[y + 10] = 1;
        if (max_x < x + 10) max_x = x + 10;
        if (max_y < y + 10) max_y = y + 10;
    }


    int sum1 = 0;

    for (int i = 0; i <= max_x; i++) {
        if (x_arr[i]) {
            for (int j = 0; j <= max_y; j++) {
                if (y_arr[j]) {
                    sum1 += ((i - x) * (j - y));
                    printf("%d %d %d %d %d\n", i, x, j, y, sum1);
                    y = j;
                }
            }
            y = 0;
            x = i;
        }
    }

    // int sum = (max_x * max_y);
    // printf("%d", sum);
    return 0;
}