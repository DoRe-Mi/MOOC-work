//求序列前n项和//

#include <stdio.h>

int main()
{
    int n, t;
    double a = 2, b = 1, sum = 0, i;
    scanf("%d", &n);
    for (t = 1; t <= n; t++)
    {
        i = a;
        sum += a / b;
        a = a + b;
        b = i;
    }
    printf("%.2lf", sum);

    return 0;
}