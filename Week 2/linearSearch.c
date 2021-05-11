#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdlib.h>
int LinearSearchalgo(int arr[],int beg,int end,int key)
{
    if(end<beg)
        return -1;
    if(arr[beg]==key)
        return beg+1;
    return LinearSearchalgo(arr,beg+1,end,key);
}
int main()
{
    clock_t start,end;
    double cpu_time;
    int arr[1000],n,key,temp,res;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    // printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        arr[i]=rand();
    }
    printf("The random array is: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("Enter the key to be found: ");
    scanf("%d",&key);
    start=clock();
    res=LinearSearchalgo(arr,0,n-1,key);
    end=clock();
    cpu_time=((double)(end-start))/CLOCKS_PER_SEC;
    if(res==-1){
        printf("The not found!!\n");
        printf("The time taken for execution is: %dsecs",cpu_time);
    }
    printf("The key found at the position %d \n",res);
    printf("The time taken for execution is: %f secs",cpu_time);
}