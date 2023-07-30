//删除字符串中的子串//

#include<stdio.h>
#include<string.h>

#define MAX 80

int main()
{
    char s1[MAX], s2[MAX];
    fgets(s1, MAX, stdin);
    fgets(s2, MAX, stdin);
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';
    char *match = strstr(s1, s2);
    if (match != NULL)
    {
        strcpy (match, match + strlen(s2));
    }
    printf("%s", s1);

    return 0;
}