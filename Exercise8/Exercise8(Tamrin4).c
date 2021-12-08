#include <stdio.h>
#include <string.h>
#define Max_size 10
void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);
void printArray(int A[], int size);
int main() {
    int num_1[Max_size],num_2[Max_size];
    printf("\n__________________________________________________\n");
    printf("\nEnter %d Elements for Array 1 \n",Max_size);
    printf("\n__________________________________________________\n");
    for (int i = 0; i < Max_size; ++i) {
        printf("number %d >>", i + 1 );scanf("%d", &num_1[i]);
    }
    printf("\n__________________________________________________\n");
    printf("\nEnter %d Elements for Array 2 \n",Max_size);
    printf("\n__________________________________________________\n");
    for (int j = 0; j < Max_size; ++j) {
        printf("number %d >>", j + 1 );scanf("%d", &num_2[j]);
    }
    int arr_size = sizeof(num_1) / sizeof(num_1[0]);
    printf("\nGiven array 1 is \n");
    printArray(num_1, arr_size);

    mergeSort(num_1, 0, arr_size - 1);
    printf("\nSorted array 1 is \n");
    printArray(num_1, arr_size);

    int arr2_size = sizeof(num_2) / sizeof(num_2[0]);
    printf("\nGiven array 2is \n");
    printArray(num_2, arr2_size);

    mergeSort(num_2, 0, arr2_size - 1);

    printf("\nSorted array 2 is \n");
    printArray(num_2, arr2_size);

    return 0;
}
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
