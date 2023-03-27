#include <stdio.h>
// Sort an Array using loops 
//void sort(int array[], int size)
void sort(char array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++) // < - Descending 
                                           // > - Ascending
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
//void pointArray(int array[], int size)
void pointArray(char array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        //printf(" %d ",array[i]);
        printf(" %c ", array[i]);
    }
}
int main()
{

    //int array[] = {7, 1, 4, 6, 2, 5, 3};
     char array[]= {'A','E','C','B','D' };
    int size = sizeof(array) / sizeof(array[0]);
    sort(array, size);
    pointArray(array, size);

    return 0;
}