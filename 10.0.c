//说反话//

#include <stdio.h>
#include <string.h>

#define MAXN 81

int main()
{
    char str[MAXN];
    gets(str);
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            str[i] = '\0';
            printf("%s ", &str[i] + 1);
        }
    }
    printf("%s", str);


    return 0;
}