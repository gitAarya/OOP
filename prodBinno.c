#include <stdio.h>
int BinaryProduct();
int main()
{
    long a, b, p = 0;
    int digit, factor = 1;

    printf(" enter the first binary number :\n");
    scanf("%ld", &a);
    printf(" enter the second  binary number :\n");
    scanf("%ld", &b);
    while (b != 0)
    {
        digit = b % 10;
        if (digit == 1)
        {
            a = a * factor;
            p = BinaryProduct(a, p);
        }
        else
        {
            a = a * factor;
            b - b / 10;
            factor = 10;
        }
        printf("product of two binary number:%ld", p);
        return 0;
    }
    int BinaryProduct(int a, int b)
    {
        int i = 0, c = 0, sum[20];
        int bp = 0;
        while (a != 0 || b != 0)
        {
            sum[i++] = (a % 10 + b % 10 + c) % 2;
            c = (a % 10 + b % 10 + c) / 2;
            a = a / 10;
            b = b / 10;
        }
        if (c != 0)
        {
            sum[i++] = c;
            i--;
        }
        while (i >= 0)
        {
            bp = bp * 10 + sum[i--];
            return bp;
        }
    }
}