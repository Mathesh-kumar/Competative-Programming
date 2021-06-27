#include<iostream>
using namespace std;

void sort(int arr[], int len)
{
    for(int i=0; i<len-1; i++)
    {
        for(int j=i+1; j<len; j++)
        {
            if(arr[i] > arr[j])
            {
                arr[i]^=arr[j];
                arr[j]^=arr[i];
                arr[i]^=arr[j];
            }
        }
    }
}

void specialArray(int arr[], int len)
{
    int i=0;
    for(;i<len/2; i++)
        cout<<arr[len-(i+1)]<<" "<<arr[i]<<" ";
    if(len%2!=0)
        cout<<arr[i];
}

int main()
{
    int arr[6] = {5, 3, 1, 4, 6, 2};

    sort(arr, 6);
    specialArray(arr, 6);

    return 0;
}