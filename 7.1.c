//换个格式输出整数//

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 1 && n < 1000)
    {
        if (n < 10)
        {
            for (int i = 1; i <= n; i++)
            {
                printf("%d", i);
            }
        }
        if (n >= 10 && n< 100)
        {
            for (int i = 0; i < n / 10; i++)
            {
                printf("S");
            }
            n %= 10;
            for (int i = 1; i <= n; i++)
            {
                printf("%d", i);
            }
        }
        if (n >= 100)
        {
            for (int i = 0; i < n / 100; i++)
            {
                printf("B");
            }
            n %= 100;
            for (int i = 0; i < n / 10; i++)
            {
                printf("S");
            }
            n %= 10;
            for (int i = 1; i <= n; i++)
            {
                printf("%d", i);
            }
        }
    }

    return 0;
}