#include <stdio.h>

int main()
{
int x = 10;
printf("%d\n", x);
int *px = &x;

int a = 0;
printf("変数aのアドレスは%d",&a);

printf("*px = %d\n", *px);
printf("%p\n", &x);


*px = 42; /* We modified `x` here! */
printf( "*px = %d\n", *px );
printf( "x = %d\n", x ); /* outputs: 'x = 42' */
}