#include <stdio.h>
#include <string.h>

int main(void) {
    int count = 0;
    char st[1000001];
    fgets(st, sizeof(st), stdin);
    int check = 0;

    for (int i = 0; i < strlen(st); i++) {
        if (check) {
            if (st[i] == ' ') {
                count++;
                check = 0;
            }
            else if (i == strlen(st) - 1) {
                count++;
            }
        }

        else if (st[i] != ' ') {
            if (i == strlen(st) - 1) {
                count++;
            }
            check = 1;
        }
    }

    printf("%d", count);
    return 0;
}