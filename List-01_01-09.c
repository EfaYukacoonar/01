/*
読み込んだ整数の値を表示して確認
*/

#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力してください：");
    scanf("%d",&no);

    printf("あなたは%dと入力しましたね。\n",no);

    return(0);
}

/*実行結果
整数を入力してください：37
あなたは37と入力しましたね。
*/
