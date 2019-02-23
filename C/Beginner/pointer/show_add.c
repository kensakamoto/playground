#include <stdio.h>

int main()
{
    int i, *p1;       //int型の変数iとint型のポインタ変数p1の宣言
    i = 25;
    p1 = &i;          //p1にiのアドレスを代入
    
    char *p2;         //char型のポインタ変数p2の宣言
    char f ='A';      //char型の変数fを宣言
    p2 = &f;          //p2にfのアドレスを代入
    
    double s, *p3;    //double型の変数sとdouble型のポインタ変数p3の宣言
    s = 2.5;
    p3 = &s;          //p3にsのアドレスを代入
    
    //iの値とアドレスの16進数表記、10進数表記をそれぞれ出力
    printf("int=%d\n intアドレス(16)=%x\n intアドレス(10)=%d\n ", i, p1, p1);
    printf("\n");
    
    //fの値とアドレスの16進数表記、10進数表記をそれぞれ出力
    printf("char=%c\n charアドレス(16)=%x\n charアドレス(10)=%d\n ", f, p2, p2);
    printf("\n");
    
    //sの値とアドレスの16進数表記、10進数表記をそれぞれ出力
    printf("double=%lf\n doubleアドレス(16)=%x\n doubleアドレス(10)=%d\n ", s, p3, p3);
    printf("\n");
    
    return 0;
}
