#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p;
    p = a;
    
    printf("aの値     = %d\n", a);    //変数aの値
    printf("a(16)の値 = %x\n", a);    // 変数aの値を進数にした値
    printf("a(p)の値  = %p\n", a);    //変数aのアドレス
    printf("pの値     = %d\n", p);    // ポインタ変数pの値
    printf("a[0]の値  = %d\n", a[0]); //配列a[0]の値
    printf("*pの値    = %d\n", *p);   // ポインタ変数pが指すアドレスの中の値
    return 0;
} 
