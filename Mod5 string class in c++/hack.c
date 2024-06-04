#include <stdio.h>

int main()
{
    const int a = 200;
    int *b = &a;
    *b = 0;
    printf("%d", a);
    return 0;
}