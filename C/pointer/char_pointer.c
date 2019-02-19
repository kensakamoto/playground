#include <stdio.h>

int main()
{
    int i;
    char *p, a[]="window";  //char型のポインタ変数pと文字列を宣言
    p = a;                  //pにaの先頭アドレスを代入
    
    for(i = 0; i < sizeof(a); i++){  //iにを代入、iがaの大きさになるまで繰り返す
        printf("%c", *(p+i));          // 結果を1文字づつ出力
    }
    return 0;
}
