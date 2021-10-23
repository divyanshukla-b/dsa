#include<stdio.h>


int printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}

int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low+1;
    int j=high;

    do
    {
        while(arr[i]<=pivot)
        {
            i++;
        }

        while (arr[j]>pivot)

        {
            j--;
        }

        if(i<j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        
    } while (i<j);
    
  int temp=arr[low];
  arr[low]=arr[j];
  arr[j]=temp;
   return j;
}

int QuickSort(int arr[],int low,int high)
{
   int partitionIndex;
   if(low<high){
    
    partitionIndex=partition(arr,low,high);//partition
    QuickSort(arr,low,partitionIndex-1);//sort left subrray:
    QuickSort(arr,partitionIndex+1,high);//sort right subarray:
   }
}


int main()
{
    int arr[]={1,5,23,3,9,2};
    printArray(arr,6);
    printf("\n");
    QuickSort(arr,0,5);
    
    printArray(arr,6);

}
