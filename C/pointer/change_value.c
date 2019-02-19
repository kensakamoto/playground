#include <stdio.h>

int main()
{
    int *p, i; //int型の変数iとint型のポインタ変数pの宣言
    p = &i;    //pにiのアドレスを代入
    *p = 100;  //pのポインタ変数が指すアドレス（変数iのアドレス）の
    
    //中身に100を代入
    //p のポインタ変数が指すアドレスの中身と変数iの値を出力
    printf("*p = %d\ni = %d\n", *p, i);
    return 0;
}
