// # できるだけ大きな互いに素な数を見つけたい
//     # 互いに素な数をgcdを使って求めろと言うことかな?
//     # どうやるのだろう
// # 最大公約数が自身の数?
// # 共通の約数が1の数が互いに素
// # 最大公約数が1になればいいということ

#include <stdio.h>
int gcd(int u, int v)
{
    int t;
    while (u > 0)
    {
        u = u % v; // if文が不要になる
        t = u; 
        u = v;
        v = t;
    }
    return v;
}

int main()
{
    int x = 0;
    int u = 2147483647;
    int v = 2147483647;
    // 最大の互いに素な整数を見つけたい
    while (1)
    {
        x = gcd(u, v);
        if (x == 1)
        {
            printf("%d %d\n", u, v);
            break;
        }
        else
        {
            v--;
        }
    }
    return 0;
}