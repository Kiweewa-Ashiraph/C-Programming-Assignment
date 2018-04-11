#include <stdio.h>

void addarrays(int arr1[],int arr2[],int size);
int main()
{
    int A[5],B[5],i;
    int size=5;
    printf("Enter the elements of array A\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }
        printf("Enter the elements of array B\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&B[i]);
    }
    addarrays(A,B,size);
}
void addarrays(int arr1[],int arr2[],int size)
{
    int i;
    int arr3[size];
    for(i=0;i<size;i++)
    {
        arr3[i]=arr1[i]+arr2[i];
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr3[i]);
    }

}
