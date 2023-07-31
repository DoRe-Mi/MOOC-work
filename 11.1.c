//通讯录的录入与显示//

#include <stdio.h>
#define N 10

struct info
{
    char name[10];
    char birthday[11];
    char gender;
    char telephone[16];
    char phone[16];
};

int main()
{
    int i, j, n;
    struct info person[N];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s %s %c %s %s", person[i].name, person[i].birthday, &person[i].gender, person[i].telephone, person[i].phone);
    }
    scanf("%d", &j);
    int num[j];
    for (i = 0; i < j; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < j; i++)
    {
        if (num[i] >= 0 && num[i] < n)
        {
            printf("%s %s %s %c %s\n", person[num[i]].name, person[num[i]].telephone, person[num[i]].phone, person[num[i]].gender, person[num[i]].birthday);
        }
        else
        {
            printf("Not Found\n");
        }
    }
    return 0;
}