//数素数//

#include<stdio.h>

int main()
{
    const int maxNumber = 10001;
    int isPrime[maxNumber];
    int KnowPrime[maxNumber];
    int i;
    int x;
    int a = 0;
    for (i = 0; i < maxNumber; i++)
    {
        isPrime[i] = 1;
    }
    for (x = 2; x < maxNumber; x++)
    {
        if (isPrime[x])
        {
            for (i = 2; i * x < maxNumber; i++)
            {
                isPrime[i * x] = 0;
            }
        }
    }
    for (i = 2; i < maxNumber; i++)
    {
        if (isPrime[i])
        {
            KnowPrime[a] = i;
            a++;
        }
    }
    int k, m, n;
    int count = 0;
    scanf("%d %d", &m, &n);
    --m;
    for (k = m; k < n; k++)
    {
        count++;
        printf("%d", KnowPrime[k]);
        if (count % 10 == 0)
        {
            printf("\n");
        }
        else if (k < n)
        {
            printf(" ");
        }
    }
    if (count % 5 != 0)
    {
        printf("\n");
    }

    return 0;
}