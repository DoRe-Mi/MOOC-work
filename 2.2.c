//然后是几点//

#include <stdio.h>

int main()

{
    int time1 = 0;
    int time2 = 0;

    scanf("%d %d", &time1, &time2);
    int a = time1 / 100 * 60;
    int b = time1 % 100;
    int c = a + b + time2;
    int d = (c / 60) * 100;
    int e = c % 60;
    

    printf("%d", d + e);

    return 0;
}