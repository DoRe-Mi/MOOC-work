<<<<<<< HEAD
//求a的连续和//

#include <stdio.h>

int main()
{
    int a, n;
    int sum = 0;
    int i;
    int t = 0;

    scanf("%d%d", &a, &n);
    
    for (i = 0; i < n; i++)
    {
        t = t * 10 + a;
        sum += t;
    }
    printf("%d\n", sum);

    return 0;
=======
//求a的连续和//

#include <stdio.h>

int main()
{
    int a, n;
    int sum = 0;
    int i;
    int t = 0;

    scanf("%d%d", &a, &n);
    
    for (i = 0; i < n; i++)
    {
        t = t * 10 + a;
        sum += t;
    }
    printf("%d\n", sum);

    return 0;
>>>>>>> 6d3e6d9b49d21a99fb20f7fc63796d38c7bde184
}