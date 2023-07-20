//打印九九口诀表//

#include <stdio.h>

int main()
{
    int N = 1, j = 1;
    scanf("%d", &N);

    while ( j <= N )
    {
        int i = 1;
        while ( i <= j )
        {
            printf("%d*%d=%-4d", i, j, i*j);
            i++;
        }
        printf("\n");
        j++;
    }

    return 0;
}