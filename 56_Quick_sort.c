#include <stdio.h>

void PrintArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("  %d ", A[i]);
    }

    printf("\n");
}

int Partition(int *A, int low, int high)
{
    int pivot = A[low];
    int temp;
    int i = low;
    int j = high;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void QuickSort(int A[], int low, int high)
{
    int PartitionIndex;

    if (low < high)
    {
        PartitionIndex = Partition(A, low, high);
        QuickSort(A, low, PartitionIndex - 1);
        QuickSort(A, PartitionIndex + 1, high);
    }
}
int main()
{

    int A[] = {2, 3, 4, 43, 42, 5, 76, 45};
    int n = 8;
    PrintArray(A, n);
    QuickSort(A, 0, n - 1);
    PrintArray(A, n);

    return 0;
}