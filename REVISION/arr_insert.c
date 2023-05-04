#include <stdio.h>
#include <stdlib.h>

void add_pos(int arr[], int arr2[], int size, int data, int pos)
{
        int i, j;
        int index = pos-1;
        for (i = 0; i <= index-1; i++ )
        {
                arr2[i] = arr[i];
        }
        arr2[index] = data;
        for(i = index, j = index+1; i < size, j < size+1; i++, j++ )
              arr2[j] = arr[i];

}
main()
{
        int arr[] = {1, 5, 3, 17, 5, 4, 0, 9, 10};
        int size = sizeof(arr)/sizeof(arr[0]);
        int arr2[size+1];

        add_pos(arr, arr2, size, 70, 7);

        int i;
        for(i = 0; i < size+1; i++)
        {
                printf("%d ", arr2[i]);
        }
}