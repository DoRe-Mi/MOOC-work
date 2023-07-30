//在字符串中查找指定字符//

#include<stdio.h>
#include<string.h>

#define MAX 80

int main()
{
    char str[MAX], ch;
    int i, len;
    gets(str);
    ch = getchar();
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] == ch)
        {
            for (int j = i; j < len; j++)
            {
                printf("%c", str[j]);
            }
            break;
        }
    }
    if (i == len)
    {
        printf("Not Found");
    }

    return 0;
}