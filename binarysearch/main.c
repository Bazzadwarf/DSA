#include <stdio.h>

int main(int argc, char *argv[])
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};

    int low = 0;
    int high = (sizeof(arr) / sizeof(arr[0])) - 1;
    int mid = 0;
    int searchterm = 6;

    while (low < high) 
    {
        mid = low + ((high - low) / 2);

        if (searchterm == arr[mid])
        {
            printf("%d", mid);
            return 1;
        }
        else if (searchterm > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }

    printf("No value found");
    return 0;
}