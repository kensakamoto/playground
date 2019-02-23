#include <stdio.h>

#define swap(a, b) \
typeof(a) __tmp = (a); (a) = (b); (b) = __tmp;

int main(void)
{
    int a = 0, b = 1;
    swap(a, b);
    printf("%d %d\n", a, b);
    return 0;
}
