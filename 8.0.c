// 查找整数

#include<stdio.h>

int main()
{
    int n, x, i;
    scanf("%d %d", &n, &x);
    int num[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (num[i] == x)
        {
            printf("%d\n", i);
            break;
        }
    }
    if (i == n)
    {
        printf("Not Found\n");
    }
    return 0;
}
