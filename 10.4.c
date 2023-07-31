//字符串循环左移//

#include<stdio.h>
#include<string.h>

#define MAX 100

int main()
{
    int n, i;
    char str[MAX];
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';
    scanf("%d", &n);
    int len = strlen(str);
    if (n > 0)
    {
        for (i = n; i < len; i++)
        {
            putchar(str[i]);
        }
        for (i = 0; i < n; i++)
        {
            putchar(str[i]);
        }
    }

    return 0;
}