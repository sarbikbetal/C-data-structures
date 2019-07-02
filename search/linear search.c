#include <stdio.h>

int linearSearch(int arr[], int s, int len)
{
    for (int x = 0; x < len; x++)
    {
        if (arr[x] == s)
            return x;
    }
    return -1;
}

int main()
{
    int s;
    int arr[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("\b are the array elements \nEnter your search term:");
    scanf("%d", &s);
    printf("%d\n", linearSearch(arr, s, len));
}