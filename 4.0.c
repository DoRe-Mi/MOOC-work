//求符合给定条件的整数集//

#include<stdio.h>
int main()
{
    int a,b,c,d,e = 0;
    scanf("%d",&a);
    for(b=a;b<a+4;++b)
    {
        for(c=a;c<a+4;++c)
        {
            for(d=a;d<a+4;++d)
            {
                if(b!=c&&b!=d&&c!=d)
                {
                    printf("%d",b*100+c*10+d);
                    e++;
                    if(e%6 == 0)
                    {
                        printf("\n");
                    }else
                    {
                        printf(" ");
                    }
                }
            }
        }
    }
    return 0;
}