#include <stdio.h>

int main(void) {
    int N, M;

    scanf("%d %d", &N, &M);

    int arr[N];
    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < M; i++) {
        int start, end;
        scanf("%d %d", &start, &end);
        int order = (end - start + 1) / 2;
        for (int j = 0; j < order; j++) {
            int temp = arr[start - 1];
            arr[start - 1] = arr[end - 1];
            arr[end - 1] = temp;
            start++;
            end--;
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}