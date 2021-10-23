#include<stdio.h>

int display(int arr[],int n)
{
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int deletion(int arr[],int size, int index ){
    if (index>=size){
        return -1;

    }

    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];

    }

}

int main(){
    int arr[100]={6,7,8,9,4};

   
    int size=5;
    int index=2;

    display(arr,size);

    deletion(arr,size,index);
    size-=1;
    display(arr,size);

    return 0;
}