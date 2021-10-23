#include<stdio.h>

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}

void bubbleSort(int arr[],int n)
{
    int isSorted=0;
    for(int i=0;i<n-1;i++)
    {
        printf("pass %d\n",i+1);
        isSorted=1;
        for(int j=0;j<n-1-i;j++)
        {
           if(arr[j]>arr[j+1])
           {
               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
            isSorted=0;
           }
        }
           if(isSorted)
           {
             return;
           }
        
    }
}
int main()
{
    int arr[6]={1,2,3,4,9,6};

    display(arr,6);

    printf("\n");

    bubbleSort(arr,6);
    display(arr,6);

   
}