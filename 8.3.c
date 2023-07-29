//组个最小数//

#include <stdio.h>

int main()
{
    int a[10], i, j;
    for (i = 0; i < 10; i++)
    {
        a[i] = 0;
    }
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j = 1; j < 10; j++)
    {
        if (a[j])
        {
            printf("%d", j);
            a[j]--;
            break;
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < a[i]; j++)
        {
            printf("%d", i);
        }
    }
    printf("\n");

    return 0;
}