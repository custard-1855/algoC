#include <stdio.h>

int binary(int x)
{
    int digit = 0; // 初期化を忘れていた
    int temp = x;
    while (temp > 0)
    {
        temp /= 2;
        digit++;
    }

    // printf("%d", digit);

    int y[digit];
    // 2進数に変換
        // 各桁を2で割ればいい?
    // 逆の順番で出力している
        // 配列に保存するか?

    int i = 0;
    while (x > 0)
    {
        y[i] = x % 2;
        x /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", y[j]);
    }

    return 0;
}


int main()
{
    int x;
    scanf("%d", &x);
    binary(x);
    return 0;
}