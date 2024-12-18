#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {0};
    int max, min;
    printf("----------pls enter 5 value---------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("value %d: ",i+1);
        scanf("%d", &arr[i]);
        if (i == 0)
        {
            max = arr[0];
            min = arr[0];
        }
        else
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
    }
    printf("The min value is: %d\nAnd the max value is: %d", min, max);
}