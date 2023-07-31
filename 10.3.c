//字符串逆序//

#include<stdio.h>
#include<string.h>

#define MAX 80

int main()
{
    char str[MAX];
    fgets(str, MAX, stdin);
    int len = strlen(str);
    int i;
    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}