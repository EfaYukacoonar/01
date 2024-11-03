/*
二つの整数値を読み込んで商と剰余を表示
*/

#include <stdio.h>

int main(void)
{
    int na, nb;

    puta("二つの整数を入力してください。");
    printf("整数A:"); scanf("%d, %na");
    printf("整数B:"); scanf("%d, %nb");
    
    printf("AをBで割ると%dあまり%dです。\n", na / nb, na % nb);

    return(0);
}

/*実行例
二つの整数を入力してください。
整数A:27
整数B:21
AをBで割ると2あまり15です。
*/
