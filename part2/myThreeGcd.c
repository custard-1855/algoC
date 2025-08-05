#include <stdio.h>
// 2回行えばいいと思う


int gcd(int u, int v)
{
    int t;
    while (u > 0)
    {
        u = u % v; // if文が不要になる
        t = u; 
        u = v;
        v = t;
        // printf("u: %d, v: %d \n", u, v);
    }
    return v;
}


int main()
{
    int x, y, z;
    while (scanf("%d %d %d", &x, &y, &z) != EOF)
    {
        if (x > 0 && y > 0 && z > 0)
            printf("%d\n", gcd(gcd(x, y), z));
    }
    return 0;
}