#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
int main(){
    clock_t start,end;
    double cpu_time;
    int arr[1000],n,key,temp,min,min_index;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    // printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        arr[i]=rand();
        printf("%d\n",arr[i]);
    }
    start=clock();
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
    end=clock();
    printf("The sorted array is:\n\n");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
    cpu_time=((double)(end-start))/CLOCKS_PER_SEC;
    printf("\nThe cpu time used: %f secs",cpu_time);
}