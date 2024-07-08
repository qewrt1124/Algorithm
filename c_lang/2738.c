#include <stdio.h>

int main() {
    int n, m;

    scanf("%d %d", &n, &m);
    int num_arr[n * 2][m];
    int final_num[m];

    for (int i = 0; i < n * 2; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &num_arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", num_arr[i][j] + num_arr[i + n][j]);
        }
        printf("\n");
    }

    return 0;
}