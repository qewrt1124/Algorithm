#include <stdio.h>
#include <memory.h>

int main() {
    int n, m;

    scanf("%d %d", &n, &m);

    int arr[n];
    memset(arr, 0, sizeof(arr));
    for(int i = 0; i < m; i++) {
        int seq[3];
        scanf("%d %d %d", &seq[0], &seq[1], &seq[2]);
        for(int j = seq[0] - 1; j < seq[1]; j++) {
            arr[j] = seq[2];
        }
    }
    
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}