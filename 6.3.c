//单词长度//

#include <stdio.h>

int main() {
    char word[100];
    int i = 0;
    do
    {
        scanf("%c", &word[i]);
        i++;
    } while (word[i-1] != '.');

    int j;
    int word_length = 0;
    int k = 0;
    for (j = 0; j < i; j++)
    {
        if (word[j] != ' ')
        {
            word_length++;
            if (k != 0 && word[j] != '.')
            {
                printf(" ");
                k = 0;
            }
            if (word[j] == '.' && word[j - 1] != ' ' && word_length != 1)
            {
                printf("%d", word_length-1);
            }
        }
        else if (word_length != 0)
        {
            printf("%d", word_length);
            word_length = 0;
            k = 1;
        }
    }

    return 0;
}