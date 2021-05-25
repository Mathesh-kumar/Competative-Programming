#include<stdio.h>
#include<stdlib.h>

int partition(int* arr, int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    int temp;

    while(start < end)
    {
        while(arr[start] <= pivot)
            start++;
        while(arr[end] > pivot)
            end--;
        if(start < end)
        {
            temp = arr[end];
            arr[end] = arr[start];
            arr[start] = temp;
        }
    }

    temp = arr[end];
    arr[end] = arr[lb];
    arr[lb] = temp;

    return end;
}

void quickSort(int* arr, int lb, int ub)
{
    if(lb < ub)
    {
        int loc = partition(arr, lb, ub);
        quickSort(arr, lb, loc-1);
        quickSort(arr, loc+1, ub);
    }
}

void main()
{
    int size, *arr;
    printf("Enter size of array : ");
    scanf("%d", &size);
    arr = malloc(sizeof(int) * size);
    printf("Enter %d elements in the array : ", size);
    for(int i=0; i<size; i++)
        scanf("%d", &arr[i]);

    quickSort(arr, 0, size);

    printf("The sorted array : ");
    for(int i=0; i<size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}