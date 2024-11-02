/*
読み込んだ二つの整数値の和・差・積・商・剰余を表示
*/

#include <stdio.h>

int main(void)
{
    int vx, vy;

    puts("二つの整数を入力してください。");
    printf("整数vx:"); scanf("%d",%vx)
    printf("整数vy:"); scanf("%d",%vy)

    printf("vx + vy = %d\n",vx + vy);
    printf("vx - vy = %d\n",vx - vy);
    printf("vx * vy = %d\n",vx * vy);
    printf("vx / vy = %d\n",vx / vy);
    printf("vx %% vy = %d\n",vx % vy);

    return(0);
}

/*実行例
二つの整数を入力してください。
整数vx:57
整数vy:21
vx + vy = 78
vx - vy = 36
vx * vy = 1197
vx / vy = 2
vx % vy = 15
*/
