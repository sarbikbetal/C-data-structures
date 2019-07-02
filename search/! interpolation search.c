#include <stdio.h>

int binarySearch(int arr[], int start, int end, int x)
{
    while (start < end)
    {
        int pos = start + ((x - arr[start]) * (end - start) / (arr[end] - arr[start]));
        if (arr[pos] == x)
            return pos;
        else if (x < arr[pos])
        {
            end = pos;
        }
        else
        {
            start = pos + 1;
        }
    }
    return -1;
}

int main()
{
    int s;
    int arr[] = {10, 20, 30, 50, 60, 80, 100, 110, 130, 170, 190, 210};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("\b are the array elements \nEnter your search term:");
    scanf("%d", &s);
    printf("%d\n", binarySearch(arr, 0, len, s));
}