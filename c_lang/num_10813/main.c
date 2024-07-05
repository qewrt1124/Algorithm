#include <stdio.h>

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < m; i++)
    {
        int fir, sed;
        scanf("%d %d", &fir, &sed);

        int temp = arr[fir - 1];
        arr[fir - 1] = arr[sed - 1];
        arr[sed - 1] = temp;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}