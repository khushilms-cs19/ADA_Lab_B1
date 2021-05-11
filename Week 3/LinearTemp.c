#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
int LinearSearchalgo(int arr[],long int beg,long int end,int key)
{
    if(end<beg)
        return -1;
    if(arr[beg]==key)
        return beg+1;
    return LinearSearchalgo(arr,beg+1,end,key);
}
int main(){
    clock_t start,end;
    long int cpu_time[10],numElements[10],res;
    int arr[30000],key;
    long int n;
    n=10000;
    for(int k=0;k<10;k++)
    {
        numElements[k]=n;
        for(int i=0;i<n;i++){
            arr[i]=rand();
        }
        key=arr[n-10];
        printf("The key is : %d\n",key);
        start=clock();
        res=LinearSearchalgo(arr,0,n-1,key);
        end=clock();
        cpu_time[k]=((long int)(end-start));
        n+=1000;
    }
    //this plots a table for the number of elements and the tick time taken for selection sort
    printf("\n\nArray Size || Time\n----------------------\n");
    for(int i=0;i<10;i++){
        printf("     %li ||  %li\n",numElements[i],cpu_time[i]);
    }
    return 0;
}