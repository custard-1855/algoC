#include <stdio.h>
int gcd(int u, int v)
{
    int t;
    // printf("u = %d\n", -2); // debug
    // printf("u = %d\n", u%v); // debug
        /*
            u,vどちらかが負になった場合を見たかった
                負になると思われる
                ~~結果が表示されない~~
                    ~~計算できない?~~
                    ~~%の実装が原因?~~
                ~~フォーマットがいけないのかも~~ そんなことはなかった
        
        */
    while (u > 0)
    {
        u = u % v; // if文が不要になる
        t = u; 
        u = v;
        v = t;
        printf("u: %d, v: %d \n", u, v);
        /*
        12345 56789
        u: 56789, v: 12345 
        u: 12345, v: 7409 
        u: 7409, v: 4936 
        u: 4936, v: 2473 
        u: 2473, v: 2463 
        u: 2463, v: 10 
        u: 10, v: 3 
        u: 3, v: 1 
        u: 1, v: 0 
        u: 0, v: 1
        */
    }
    return v;
}

// frac.cで呼ぶためにmainをコメントアウト
// pythonの__main__みたいな記法があるとは思うが見送り

int main()
{
    int x, y;
    while (scanf("%d %d", &x, &y) != EOF)
    {
        if (x > 0 && y > 0)
            // ここのif文の存在を忘れていた ここがあるから表示されない
            printf("%d\n", gcd(x, y));
    }
    return 0;
}