#include <stdio.h>

int add_ten(int num)
{
    return(num + 10);
}

int main(void)
{
    int td_array[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int i;
    int j;

    i = 0;
    while(i < 3)
    {
        j = 0;
        while(j < 3)
        {
            td_array[i][j] = add_ten(td_array[i][j]);
            printf("%d\n", td_array[i][j]);
            j++;
        }
        i++;
    }
    return(0);
}