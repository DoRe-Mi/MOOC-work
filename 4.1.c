//水仙花数//

#include<stdio.h>

int main()
{
    int N;
    int i = 1;

    scanf("%d", &N);
    int first = 1;
    while ( i < N )
    {
        first *= 10;
        i++;
    }
    i = first;
    while ( i < first*10){
        int t = i;
        int sum = 0;
        do{
            int d = t%10;   
            t /= 10;
            int p = d;  // p = d^N
            int j = 1; 
            while ( j < N){
                p *= d;
                j++;
            }
            sum += p;   // sum = d^N + d^N-1 + ... + d^1
        }while ( t > 0);
        if ( sum == i){
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}