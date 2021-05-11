#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
int main(){
    clock_t start,end;
    long int cpu_time[10],numElements[10];
    int arr[30000],n,key,temp,min,min_index;
    n=10000;
    for(int k=0;k<10;k++)
    {
        numElements[k]=n;
        for(int i=0;i<n;i++){
            arr[i]=rand();
        }
        start=clock();
        //Selection Sort algorithm 
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