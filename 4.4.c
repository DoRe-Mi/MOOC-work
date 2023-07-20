//猜数字游戏//

#include<stdio.h>

int main()
{
    int number, time;
    scanf("%d %d", &number, &time);
    int x;
    int cnt = 0;
    do
    {
        scanf("%d", &x);
        cnt++;
        if (x == number&&cnt == 1){
            printf("Bingo!\n");
            break;
        }
        else if (x > number){
            printf("Too big\n");
        }
        else if (x < number){
            printf("Too small\n");
        }
        else if (x == number&&cnt > 1&&cnt <= 3&&cnt <= time){
            printf("Lucky You!\n");
            break;
        }
        else if (x ==number&&cnt > 3&&cnt <= time){
            printf("Good Guess!\n");
            break;
        }
        else if (x < 0||cnt > time){
            printf("Game Over\n");
            break;
        }
    } while ( x != number);
    
    
    return 0;
}