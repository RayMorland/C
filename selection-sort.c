#include <stdio.h>

void SelectionSort(int A[], int n);

int main()
{
    int length = 5;
    int arr[5] = {5, 4, 3, 2, 1};
    SelectionSort(arr, length);
    for (int i = 0; i < length; i++)
    {
        printf("%u", arr[i]);
    }
    printf("\n");
}

void SelectionSort(int A[], int n)
{
    int i, j, small, temp;
    for (int i = 0; i < n - 1; i++)
    {
        small = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[small])
            {
                small = j;
            }
        }
        temp = A[small];
        A[small] = A[i];
        A[i] = temp;
    }
}