#include<stdio.h>
int findGCD(int num1,int num2){
    if(num1%num2==0)
        return num2;
    return findGCD(num2,num1%num2);    
}
int main()
{
    int num1,num2,gcd,large,small;
    printf("Enter the numbers: ");
    scanf("%d%d",&num1,&num2);
    large=num1>num2?num1:num2;
    small=num2>num1?num1:num2;
    gcd=findGCD(large,small);
    printf("The GCD of %d and %d is: %d\n\n",large,small,gcd);
}