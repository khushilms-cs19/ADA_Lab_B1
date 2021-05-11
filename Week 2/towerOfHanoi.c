#include<stdio.h>
void towerOfHanoi(int n,char src,char temp,char dest)
{
    if(n==1){
        printf("Move the disk 1 %c to %c\n",src,dest);
        return;
    }
    towerOfHanoi(n-1,src,dest,temp);
    printf("Move the disk %d from %c to %c\n",n,src,dest);
    towerOfHanoi(n-1,temp,src,dest);
}
int main()
{
    int n;
    printf("Enter the number of disks: \n");
    scanf("%d",&n);
    towerOfHanoi(n,'S','T','D');
    return 0;
}