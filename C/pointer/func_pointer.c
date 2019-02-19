#include <stdio.h>

//引数にポインタ変数を持ったkeisan関数を宣言
void keisan(int *p_point, int *p_sum, int *p_avg, int size);

int main()
{
    int point[5], sum = 0, avg = 0, i;
    int size = sizeof(point) / sizeof(int);
    
    printf("配列のサイズは%d\n", size);
//    printf("%d\n", malloc_usable_size(point));
    
    for(i = 0; i < size; i++){
        printf("%d人目-> ", i+1);
        scanf("%d",&point[i]);
    }
    keisan(point, &sum, &avg, size);  //それぞれのアドレスをkeisan関数に渡す
    printf("合計：%d\t 平均点：%d\n", sum, avg);  //合計点と平均点を出力
    return 0;
}

//point の先頭アドレスをポインタp_pointに
//sumのアドレスをポインタ p_sumに
//avgのアドレスをポインタp_avgに
//それぞれ代入する
void keisan(int *p_point, int *p_sum, int *p_avg, int size)
{
    printf("%d\n", sizeof(p_point));
    printf("%d\n", sizeof(int));
    for(int i = 0; i < size; i++) {
        //ポインタp_sumが指すアドレスの中身に
        //ポインタp_sumが指すアドレスの中身と
        //ポインタp_pointが指すアドレス+iの中身を代入
        *p_sum = *p_sum + *(p_point + i);
    }
    
    //ポインタp_avgが指すアドレスの中身に
    //ポインタp_sumが指すアドレスの中身を5で割ったものを代入
    *p_avg = *p_sum / 5;
}
