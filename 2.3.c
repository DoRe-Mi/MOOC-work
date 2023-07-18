//逆序的三位数//

#include<stdio.h>

int main()

{
    int n = 0;
    scanf("%d", &n);
    int a = n / 100;
    int b = (n % 100) / 10;
    int c = n % 10;

    printf("%d", c * 100 + b * 10 + a);

    return 0;
}