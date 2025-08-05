#include <stdio.h>
#include "mygcd.c" 
// ""でカレントディレクトリから探す
// https://cs-techblog.com/language/c-language/preprocessor-include-double-quotation-or-less-than/#toc3


struct fraction { int numerator; int denominator;};

int main()
{
    struct fraction fraction;
    int x, y, common;
    while (scanf("%d %d", &x, &y) != EOF)
    {
        if (x > 0 && y > 0)
            common  = gcd(x, y);
            fraction.numerator = x / common;
            fraction.denominator = y / common;
            printf("%d/%d\n", fraction.numerator, fraction.denominator);
    }
    return 0;

}