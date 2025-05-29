#include <stdio.h>

void PrintArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("  %d ", A[i]);
    }
}

void SelectionSort(int *A, int n)
{
    int indexOfMin, temp;
    for (int i = 0; i < n; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}
int main()
{

    int A[] = {2, 3, 4, 43, 42, 5, 76, 45};
    int n = 8;

    printf("before\n");
    PrintArray(A, n);
    SelectionSort(A, n);
    printf("\nafter\n");
    PrintArray(A, n);
}