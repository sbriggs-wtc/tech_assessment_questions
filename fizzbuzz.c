
#include <stdio.h>

int main(void)
{
    int i;
    int three;
    int five;
    int word;

    i = 0;
    three = 0;
    five = 0;
    word = 0;

    while(i <= 100)
    {
        if (i > 0)
        {
            if (three == 3)
            {
                printf("fizz");
                three = 0;
                word = 1;    
            }
            if (five == 5)
            {
                printf("buzz");
                five = 0;
                word = 1;
            }
            if (word == 1)
            {
                printf("\n");
            }
            else
            {
                printf("%d\n", i);
            }
        }
        three++;
        five++;
        i++;
        word = 0;
    }
    return (0);
}