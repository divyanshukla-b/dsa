#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int printArray(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
}

int Maximum(int *A,int n)
{
    int max =INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(max<A[i])
        {
            max=A[i];
        }
    }
    return max;
}

void CountSort(int*A,int n)
{
    int max = Maximum(A,n);

    int *count=(int *)malloc((max+1)*sizeof(int));

    for(int i=0;i<max+1;i++)
    {
        count[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        count[A[i]]=count[A[i]]+1;
    }
   int i=0;
   int j=0;

    while(i<max+1)
    {
        if(count[i]>0)
        {
            A[j]=i;
            count[i]=count[i]-1;
            j++;
        }
        i++;
    }
}



int main(){

    int A[]={1,6,3,2,5,11,55,33};

    printArray(A,8);
    printf("\n");
    CountSort(A,8);
    printArray(A,8);
   
   return 0;
}