#include <stdio.h>

int main(void)
{
    int answer, guess, count = 0;

    scanf("%d", &answer);

    do {
        scanf("%d", &guess);
        count += 1;

        if (guess > answer)
            printf("%d>?\n", guess);
        else if (guess < answer)
            printf("%d<?\n", guess);
        else
            printf("%d==?\n", guess);

    } while (guess != answer);

    printf("%d\n", count);

    return 0;
}
