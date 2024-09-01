/*
読み込んだ二つの整数値の和を表示
*/

#include <stdio.h>

int main(void)
{
    int n1,n2;

    puta("二つの整数を入力してください。")
    printf("整数１："); scanf("%d",&n1);
    printf("整数２："); scanf("%d",&n2);

    printf("それらの和は%dです。\n",n1+n2);

    return(0);
}

/*実行例
二つの整数を入力してください。
整数１：27
整数２：35
それらの和は62です。
*/
