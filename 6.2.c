//字符串字母大小写转换//

#include<stdio.h>

int main()
{
    char c;
    while((c = getchar()) != '#')
    {
        if(c >= 'a' && c <= 'z')
        {
            c = c - 32;
        }
        else if(c >= 'A' && c <= 'Z')
        {
            c = c + 32;
        }
        printf("%c",c);
    }
    return 0;
}