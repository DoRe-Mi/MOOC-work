<<<<<<< HEAD
//约分最简分式//

#include <stdio.h>

int main()
{
    int a, b, i;
    scanf("%d/%d", &a, &b);
    if (a > b||b == a){
        printf("%d/%d", a, b);
    }
    else
    {
        for (i = 2; i <= a; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                a = a / i;
                b = b / i;
                i = 1;
            }
        }
        printf("%d/%d", a, b);
    }
    
    return 0;
=======
//约分最简分式//

#include <stdio.h>

int main()
{
    int a, b, i;
    scanf("%d/%d", &a, &b);
    if (a > b||b == a){
        printf("%d/%d", a, b);
    }
    else
    {
        for (i = 2; i <= a; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                a = a / i;
                b = b / i;
                i = 1;
            }
        }
        printf("%d/%d", a, b);
    }
    
    return 0;
>>>>>>> 6d3e6d9b49d21a99fb20f7fc63796d38c7bde184
}