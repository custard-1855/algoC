#include <stdio.h>
#include <math.h>

int convert(int a)
{
    /*
        10進数を一文字ずつ読み込む
        一つの整数にしろと言っている
        複数の10進数を読み込むのか?
        足し込むのかな
        答えがないからなんとも言えない

    */


    // どうやって一文字ずつ読み込む?
    // 割って出せるかも
    // 110 なら 100で割ると1

    // 桁数を求めたい
    // 10の何乗か
    int divide_a = a, digit = 0;
    while (divide_a >= 10)
    {
        divide_a /= 10;
        digit++;
    }
    printf("%d\n", digit);

    int sum = 0;
    for (int i = 0; i <= digit; i++)
    {
        // sum  += a / pow(10, (digit - i)); // ^は排他的論理和
        // 最下位桁のみ注目すればいい だから剰余を取る
        sum += a % 10;
        printf("sum: %d\n", sum);
        a = a / 10;
    }

    return sum;
}

int main()
{
    printf("n: %d\n", convert(100));
    return 0;
}