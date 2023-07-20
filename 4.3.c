//统计素数并求和//

#include <stdio.h>

int main()
{
    int M, N, i;
    int sum = 0;
    int cnt = 0;
    scanf("%d %d", &M, &N);
    if ( M == 1 ){
        M++;
    }
    for (i = M; i <= N; i++){
        int j; 
        int isPrime = 1;
        for (j = 2; j < i-1; j++){
            if (i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1){
            cnt++;
            sum += i;
        }
    }
    printf("%d %d\n", cnt, sum);
    return 0;
}