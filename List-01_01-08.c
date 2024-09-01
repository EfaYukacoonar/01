/*
二つの変数に整数値を格納して表示
*/

#include <stdio.h>

int main(void)
{
    int vx,vy;

    vx=57;
    vy=vx+10;

    printf("vxの値は%dです。\n",vx);
    printf("vyの値は%dです。\n",vy);

    return(0);
}

/*実行結果
vxの値は57です。
vyの値は67です。
*/
