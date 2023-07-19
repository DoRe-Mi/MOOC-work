//三天打鱼两天晒网//

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 5 == 0 || n % 5 == 4)
        printf("Drying in day %d", n);
    else
        printf("Fishing in day %d", n);

    return 0;
}