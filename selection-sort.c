#include <stdio.h>

#define MAX 10
int A[MAX];

void SelectionSort(int A[], int n);

int main()
{
    int i, n;

    printf("Please enter %d integers: \n", MAX);
    for (n = 0; n < MAX && scanf("%d", &A[n]) != EOF; n++)
        ;

    SelectionSort(A, n);
    printf("Sorted Nubmers: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", A[i]);
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