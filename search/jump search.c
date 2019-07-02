#include <stdio.h>

int jumpSearch(int arr[], int end, int step, int x)
{
    for (int i = 0; i < end; i = i + step)
    {
        if (arr[i] == x)
        {
            return i;
        }
        else if (x < arr[i])
        {
            for (int j = 1 + i - step; j < i; j++)
            {
                if (arr[j] == x)
                    return j;
            }
            return -1;
        }
    }
    return -1;
}

int main()
{
    int s, x;
    int arr[] = {10, 20, 30, 50, 60, 80, 100, 110, 130, 170, 190, 210, 240};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("\b are the array elements \nEnter your search term:");
    scanf("%d", &x);
    printf("No. of steps to jump: ");
    scanf("%d", &s);
    printf("%d\n", jumpSearch(arr, len, s, x));
}