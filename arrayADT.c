#include <stdio.h>
#include <stdlib.h>

struct MyArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void CreateArray(struct MyArray *a, int t_size, int u_size)
{
    a->total_size = t_size;
    a->used_size = u_size;
    a->ptr = (int *)malloc(t_size * sizeof(int));
}

void setValue(struct MyArray *a)
{
    int n;

    for(int i=0;i< a->used_size; i++)
    {
        printf("Enter elements %d: \n",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
}
void show(struct MyArray *a){
    for(int i=0;i<a->used_size;i++){
        printf("\n %d",(a->ptr)[i]);
    }
}


int main()
{
    struct MyArray marks;
    CreateArray(&marks, 50, 20);
    setValue(&marks);

    show(&marks);
    return 0;
}