<<<<<<< HEAD
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
=======
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
>>>>>>> 6d3e6d9b49d21a99fb20f7fc63796d38c7bde184
}