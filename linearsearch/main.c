#include <stdio.h>

int main(int argc, char *argv[])
{
    int arr[] = {1,3,8,6,7};
    int searchterm = 8;
    int length = sizeof(arr) / sizeof(arr[0]);
    int result = -1;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] == searchterm)
        {
            result = i;
            break;
        }
    }

    printf("%d", result);

    return -1;
}