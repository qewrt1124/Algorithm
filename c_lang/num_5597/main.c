#include <stdio.h>

int main() {
    int student[30] = { 0 };
    int num;

    for (int i = 0; i < 28; i++) {
        scanf("%d", &num);
        student[num - 1] = 1;
    }

    int count = 0;
    num = 1;
    while (count < 2) {
        if (!student[num - 1]) {
            printf("%d\n", num);
            count++;
        }
        num++;
    }

    return 0;
}