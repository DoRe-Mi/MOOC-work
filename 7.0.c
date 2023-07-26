//写出这个数//

#include <stdio.h>
#include <string.h>

const char *num[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

int main()
{
    char ch, number[10];
    int sum = 0;
    while((ch = getchar()) != '\n')
    {
        sum += ch - '0';
    }
    sprintf(number, "%d", sum);
    printf("%s", num[number[0] - '0']);
    for (size_t i = 1; i < strlen(number); i++)
    {
        printf(" %s", num[number[i] - '0']);
    }
    printf("\n");
    
    return 0;
}