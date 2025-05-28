#include <stdio.h>

// void bubbleSort(int *A, int n)
// {
//     int temp;
//     int isSorted = 0;
//     for (int i = 0; i < n - 1; i++) // For number of pass
//     {
//         printf("Working on pass number %d\n", i + 1);
//         for (int j = 0; j < n - 1 - i; j++) // For comparison in each pass
//         {
//             if (A[j] > A[j + 1])
//             {
//                 temp = A[j];
//                 A[j] = A[j + 1];
//                 A[j + 1] = temp;
//             }
//         }
//     }
// }
void AdaptiveBubbleSort(int *A, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i + 1);
        isSorted=1;
        for (int j = 0; j < n - 1 - i; j++) // For comparison in each pass
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                isSorted=0;
            }
        }
        if(isSorted){
            return;
        }
    }
}

void PrintArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The element is %d\n", A[i]);
    }
}
int main()
{
    int A[] = {2, 3, 4,5};
    // int A[] = {2, 3, 4, 43, 42, 5, 76, 45};
    int n =4 ;
    // PrintArray(a, n);
    AdaptiveBubbleSort(A, n);
    PrintArray(A, n);
}
