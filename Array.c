#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount, z = 0, j,i,sum=0,check;
    printf("Enter the amount of numbers\n");
    scanf("%d", &amount);
    int arr[amount];
    printf("Enter Numbers\n");
    for (i = 0; i < amount; i++)
    {
        check = 1;
        printf("Enter your numbers %d ",i);
        scanf("%d", &z);
        for (j = 0; j <= i; j++)
        {
            if (arr[j] == z)
            {
                printf("It's a duplicate number,try again!\n");
                i = i - 1;
                check = 0;
            }
        }
        if (check == 1)
        {
            arr[i] = z;
        }
    }
    printf("Numbers: ");
    for (i = 0; i < amount; i++)
    {
        sum = sum + arr[i];
        printf("%d ", arr[i]);
    }
    float avr = (float)sum / (float)amount;

    printf("The Total is %d and the average is %0.2f \n", sum, avr);

}

