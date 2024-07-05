#include <stdio.h>

int main()
{
    int max;
    int count = 1;
    scanf("%d", &max);

    for(int i = 0; i < 8; i++) {
        int comp;
        scanf("%d", &comp);
        if(max < comp) {
            max = comp;
            count = i + 2;
        }
    }

    printf("%d\n%d", max, count);
    return 0;
}
