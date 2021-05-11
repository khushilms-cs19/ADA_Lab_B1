#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int BinarySearchalgo(int arr[],int beg,int end,int key)
{
    if(end>=beg)
    {
        int mid=(beg+end)/2;
        if(arr[mid]==key)
        {
            return mid+1;
        }
        if(arr[mid]>key)
        {
            return BinarySearchalgo(arr,beg,mid-1,key);
        }
        if(arr[mid]<key)
        {
            return BinarySearchalgo(arr,mid+1,end,key);
        }
    }
    return -1;
}
int main()
{
    int choice,n;
    int arr[15000];
    int num,key,res,min_index,temp;
    clock_t start,end;
    double timeTaken;
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        arr[i]=rand();
        printf("%d\n",arr[i]);
    }
    // printf("Enter the elements of the array: ");
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    for(int i=0;i<n-1;i++){
        min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min_index]>arr[j])
            {
                min_index=j;
            }
        }
        if(min_index!=i)
        {
            temp=arr[i];
            arr[i]=arr[min_index];
            arr[min_index]=temp;
        }

    }
    printf("The sorted array is:\n\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("Enter the key to be found: ");
    scanf("%d",&key);
    start=clock();
    res=BinarySearchalgo(arr,0,n-1,key);
    end=clock();
    timeTaken=((double)(end-start))/CLOCKS_PER_SEC;
    if(res==-1){
        printf("The was not found!!\n");
        printf("The time taken for execution: %f\n",timeTaken);
        return 0;
    }
    printf("The key was found at position %d\n",res);
    printf("The time taken for execution: %f\n",timeTaken);
    return 0;
}


