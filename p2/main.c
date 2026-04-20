#include <stdio.h>

int main(void)
{
    int n, i = 0;
    char ch = '\0';
    int lower_cnt = 0, digit_cnt = 0;
    int lower_max = 0, digit_max = 0;

    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        scanf("%c", &ch);

        if (ch >= 'a' && ch <= 'z')
            lower_cnt += 1;
        else
            lower_cnt = 0;

        if (ch >= '0' && ch <= '9')
            digit_cnt += 1;
        else
            digit_cnt = 0;

        if (lower_cnt > lower_max)
            lower_max = lower_cnt;
        if (digit_cnt > digit_max)
            digit_max = digit_cnt;
    }

    printf("%d\n", lower_max);
    printf("%d\n", digit_max);

    return 0;
}
