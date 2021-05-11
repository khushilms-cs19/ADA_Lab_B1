#include<stdio.h>
#include<stdlib.h>
int LinearSearchalgo(int arr[],int beg,int end,int key)
{
    if(end<beg)
        return -1;
    if(arr[beg]==key)
        return beg+1;
    return LinearSearchalgo(arr,beg+1,end,key);
}
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
    int choice;
    int arr[5];
    int num,key,res;
    printf("Enter the 5 elements of the array: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(;;)
    {
        printf("\n1:Linear Search\n2:Binary Search\n3:Enter a new array.\n4:Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter the key to found:");
                    scanf("%d",&key);
                    res=LinearSearchalgo(arr,0,4,key);
                    if(res!=-1)
                        printf("\nThe key %d is found at the position %d\n",key,res);
                    else    
                        printf("\nThe key was not found\n");    
                    break;

            case 2: printf("Enter the key to be found: ");
                    scanf("%d",&key);
                    res=BinarySearchalgo(arr,0,4,key);
                    if(res!=-1)
                        printf("\nThe key %d is found at the position %d\n",key,res);
                    else   
                        printf("\nThe key was not found\n");    
                    break;

            case 3: printf("Enter the new elements of the array: ");
                    for(int i=0;i<5;i++)
                    {
                        scanf("%d",&arr[i]);
                    }
                    break;

            default:exit(0);
        }
    }

}