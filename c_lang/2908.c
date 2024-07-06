#include <stdio.h>
#include <string.h>

int main() {
    char num[4];
    int changed_num[2];

    for(int i = 0; i < 2; i++) {
        scanf("%s", num);
        int k = 100;
        for(int j = strlen(num) - 1; j > -1; j--, k /= 10) {
            changed_num[i] += (num[i] - 48) * k;
        }
    }

    if(changed_num[0] > changed_num[1]) {
        printf("%d", changed_num[0]);
        return 0;
    }
    printf("%d", changed_num[1]);
}