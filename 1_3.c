#include <stdio.h>

int main(void) {
    int beginchis, dlina, cross, n;
    beginchis = 1;
    dlina = 2;
    scanf("%d", &n); // до числа сто упорядочены числа по столбцам, если влезет в поле вывода
    while (beginchis <=n) {
        if (beginchis < 10) {
            printf("  ");
        }
        else if (beginchis <100) {
            printf(" ");
        }
        printf("%d", beginchis);
        while (dlina <= n) {
            cross = beginchis * dlina;
            if (cross < 10) {
                printf("    ");
            }
            else if (cross < 100) {
                printf("   ");
            }
            else if (cross < 1000) {
                printf("  ");
            }
            else if (cross < 10000) {
                printf(" ");
            }
            printf("%d", cross);
            dlina = dlina +1;
            if (dlina <= n) {
                printf(" ");
            }
        }
        dlina = 2;
        beginchis = beginchis + 1;
        printf("\n");
    }
    return 0;
}
