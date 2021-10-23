#include<stdio.h>

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}

void SelectionSort(int arr[],int n)
{
   int indexOfMin;
    for(int i=0;i<n-1;i++)
    {
        indexOfMin=i;
        
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[indexOfMin])
            {
                indexOfMin=j;

            }
        }
        int temp=arr[i];
        arr[i]=arr[indexOfMin];
        arr[indexOfMin]=temp;     
    }
}
int main()
{
    int arr[6]={1,5,10,2 ,9,6};

    display(arr,6);

    //printf("\n");

   SelectionSort(arr,6);
    display(arr,6);

   
}

