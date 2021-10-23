#include<stdio.h>


void display(int arr[],int n)
{
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}

int insertion(int arr[],int size,int element,int capacity, int index){
    if(size>=capacity){
        return -1;

    }

    for(int i=size-1;i>=index;i--){

        arr[i+1]=arr[i];
    }
    arr[index]=element;

    return 1;

}


int main(){
    int arr[50]={2,4,1,6,7,4,3};
  

    insertion(arr,7,10,50,3);
    display(arr,8);

    return 0;

}