#include<stdio.h>

/*int LinearSearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}*/
//use Binary search when given array is sorted

int BinarySearch(int arr[],int size,int element){
    int low=0;
    int high=size-1;

    while(low<=high){
        int mid=(low+high)/2;
    if(arr[mid]==element)
    {
        return mid;

    }

    if(arr[mid]<element){
      low=mid+1;

    }
    else{
        high=mid-1;
    }


    }
    return -1;
}

int main(){
    int arr[]={1,4,5,33,54,88,999,9999,10000};
    int low,high,mid;

    int size= sizeof(arr)/sizeof(int);

    int element=10000;

    int index= BinarySearch(arr,size,element);

 printf("the element %d is at position: %d",element,index);

 return 0;


}