#include "stdbool.h"
#include <stdio.h>
#include "math.h"

int main(int argc, char *argv[])
{
    bool arr[] = { false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true };

    double size = sizeof(arr) / sizeof(arr[0]);
    double sq = sqrt(size);
    sq = floor(sq);
    int i = 0;

    for (; i < (int)size; i += (int)sq) // Find the first breakage
    {
        if (arr[i])
        {
            i -= sq;
            break;
        }
    }

    int j = i + (int)sq;

    for (; i < (int)size && i <= j; i++)
    {
        if (arr[i])
        {
            printf("%d", i);
            break;
        }
    }

    return 0;
}