//A+B和C//

#include <stdio.h>

int main()
{
    int t, i;
    long a, b, c;
    scanf("%d", &t);

    if (t >= 1 && t <= 10)
    {
        for (i = 1; i <= t; i++)
        {
            scanf("%ld %ld %ld", &a, &b, &c);
            if (a + b > c)
            {
                printf("Case #%d: true\n", i);
            }
            else
            {
                printf("Case #%d: false\n", i);
            }
        }
    }
    return 0;
}