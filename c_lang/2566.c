#include <stdio.h>

int main() {
    int arr[9][9];

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int max[3] = { 1, 1, arr[0][0] };
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (max[2] < arr[i][j]) {
                max[0] = i + 1;
                max[1] = j + 1;
                max[2] = arr[i][j];
            }
        }
    }

    printf("%d\n", max[2]);
    printf("%d %d", max[0], max[1]);
    return 0;
}