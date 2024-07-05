#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int num, max;
    int arr[N];
    scanf("%d", &max);
    arr[0] = max;
    for (int i = 1; i < N; i++) {
        scanf("%d", &num);
        arr[i] = num;
        if (max < num) {
            max = num;
        }
    }

    float sum = 0;
    for (int i = 0; i < N; i++) {
        sum += (float)arr[i] / max * 100;
    }

    printf("%f", sum / N);
    return 0;
}