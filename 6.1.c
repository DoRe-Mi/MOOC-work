//简单计算器//

#include <stdio.h>

int main()
{
    int a, i, flag = 0;
    char c = '0';
    scanf("%d", &a);
    while ( c != '=')
    {
        scanf("%c", &c);
        if (c == '=')
            break;
        scanf("%d", &i);
        if (c == '+')
        {
            a += i;
        }
        else if (c == '-')
        {
            a -= i;
        }
        else if (c == '*')
        {
            a *= i;
        }
        else if (c == '/')
        {
            if (i != 0)
            {
                a /= i;
            }
            else
            {
                flag = 1;
            }
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 1)
        {
            printf("ERROR");
        }
        else
        {
            printf("%d\n", a);
        }

    return 0;
}