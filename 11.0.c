//平面向量加法//

#include <stdio.h>
#include <math.h>

struct  point
{
    double x;
    double y;
};

struct vector
{
    struct point V1;
    struct point V2;
};

int main()
{
    struct vector V;
    scanf("%lf %lf %lf %lf",&V.V1.x,&V.V1.y,&V.V2.x,&V.V2.y);
    double x = V.V1.x+V.V2.x;
    double y = V.V1.y+V.V2.y;
    if (fabs(x) < 0.05)
    {
        x = fabs(x);
    }
    if (fabs(y) < 0.05)
    {
        y = fabs(y);
    }
    printf("(%.1lf, %.1lf)",x,y);
    return 0;
}