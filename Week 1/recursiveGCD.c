#include<stdio.h>
#include<stdlib.h>

int gcdIterative(int a, int b)
{
    int modnum,temp;
    for(;;)
    {
        modnum=a%b;
        if(modnum==0)
        {
            return b;
        }
        temp=a;
        a=b;
        b=temp%b;
    }
}

int gcdRecursive(int a, int b)
{
    if(a%b==0)
        return b;
    else
        return gcdRecursive(b,a%b);   
}

int main()
{
    int arr[5];
    int gcdnum,choice,numA,numB,res;
    for(;;)
    {
        printf("\n\n1:Find GCD iteratively\n2:Find GCD Recursively.\n3:Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter the numbers :\n");
                    printf("number A:");
                    scanf("%d",&numA);
                    printf("number B:");
                    scanf("%d",&numB);
                    int a=(numA>numB)?numA:numB;
                    int b=(numA>numB)?numB:numB;
                    res=gcdIterative(a,b);
                    printf("The greatest common divisor is : %d",res);
                    break;
            case 2: printf("Enter the numbers: \n");
                    printf("number A: ");
                    scanf("%d",&numA);
                    printf("number B: ");
                    scanf("%d",&numB);
                    res=gcdRecursive(numA,numB);
                    printf("The Greatest common divisor is: %d",res);
                    break;

            default: exit(0);                 

        }
    }
}