#include <stdio.h>
#include <stdlib.h>

#define ARRAYLENGTH 100

void generateRandomArray(int *array)
{
    for (size_t i = 0; i < ARRAYLENGTH; i++)
    {
        array[i] = rand();
    }
}

void printArrayContent(int *array)
{
    for (size_t i = 0; i < ARRAYLENGTH; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
}

void sortArray(int *array)
{
    for (size_t i = 0; i < ARRAYLENGTH - 1; i++ )
    {
        for (size_t j = 0; j < ARRAYLENGTH - 1 - i; j++)
        {
           if (array[j] > array[j+1])
           {
            int temp = array[j+1];
            array[j+1] = array[j];
            array[j] = temp;
           }      
        }
    }
}

int main(int argc, char *argv[])
{
    int array[ARRAYLENGTH];

    generateRandomArray(array);    
    sortArray(array);
    printArrayContent(array);
    
    return 1;
}