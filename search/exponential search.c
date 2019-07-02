#include <stdio.h>

int binarySearch(int arr[], int start, int end, int x)
{
    while (start < end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == x)
            return mid;
        else if (x < arr[mid])
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int exponentialSearch(int arr[], int end, int x)
{
    int i = 1;
    while (i <= end)
    {
        if (x == arr[i - 1])
            return i - 1;
        else if (x > arr[i - 1])
        {
            i *= 2;
        }
        else
        {
            return binarySearch(arr, i / 2, i, x);
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
    printf("%d\n", exponentialSearch(arr, len, s));
}