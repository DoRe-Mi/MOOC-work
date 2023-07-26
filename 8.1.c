//求一批整数中出现最多的个位数字//

#include<stdio.h>

int main()
{
    int a[10] = { 0 };
    int n, i, max = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        while (temp != 0)
        {
            a[temp % 10]++;
            temp /= 10;
        }
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("%d:", max);
    for (i = 0; i < 10; i++)
    {
        if (a[i] == max)
        {
            printf(" %d", i);
        }
    }

    return 0;
}
