/*
読み込んだ二つの整数値の和を求めて表示
*/

#include <stdio.h>

int main(void)
{
    int n1, n2:
    int wa;

    puts("二つの整数を入力してください。");
    printf("整数1:") scanf("%d",&n1);
    printf("整数2:") scanf("%d",&n2);

    wa = n1 + n2;

    printf("それらの和は%dです。\n", wa);

    return(0);
}

/*実行例
二つの整数を入力してください。
整数1：27
整数2：35
それらの和は62です。

 */
