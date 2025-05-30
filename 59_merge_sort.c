#include <stdio.h>

void PrintArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("  %d ", A[i]);
    }
    printf("\n");
}

void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            k++;
            j++;
        }
        while (i <= mid)
        {
            B[k] = A[i];
            i++;
            k++;
        }
        while (j <= high)
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}

void mergeSort(int A[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, mid, low, high);
    }
}
int main()
{
    int A[] = {14, 23, 24, 5, 13};
    int n = 5;
    PrintArray(A, n);
    mergeSort(A, 0, 4);
    PrintArray(A, n);

    return 0;
}