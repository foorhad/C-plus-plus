#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int rem = x % 10;
    x = x / 10;
    // printf("%d %d", rem, x);
    if (rem % x == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");
    }

    return 0;
}