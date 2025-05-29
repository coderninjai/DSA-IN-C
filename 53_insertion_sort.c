#include <stdio.h>

void PrintArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The element is %d\n", A[i]);
    }
}

void InsertionSort(int *A, int n)
{
    int key,j;
    for (int i = 1; i < n-1; i++)
    {
        key=A[i];
        j=i-1;

        while (j>=0 && A[j]>key)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
    

}
int main()
{

    // int A[] = {2, 3, 4,5};
    int A[] = {2, 3, 4, 43, 42, 5, 76, 45};
    int n = 8;

    // PrintArray(A,n);
    InsertionSort(A, n);
    PrintArray(A,n);
}