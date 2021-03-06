#include <stdio.h>

int abs(int a)
{
    if (a < 0)
    {
        return -a;
    }
    return a;
}

void update(int *a, int *b)
{
    // Complete this function
    *a = *a + *b;
    // Because *a has been updated
    *b = abs(*a - *b - *b);
    // *b = abs(*a - 2**b);
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
