#include<string.h>
#include<stdio.h>
int brute_force_patterMatch(char text[],char pattern[])
{
    int i,j;
    int n=strlen(text);
    int m=strlen(pattern);
    for(i=0;i<(n-m);i++){
        j=0;
        while(j<m && text[i+j]==pattern[j])
        {
            j++;
        }
        if(j==m){
            return i;
        }
    }
    return -1;
}
void main()
{
    int res;
    char str[50],substr[50];
    printf("\nEnter the main string: ");
    scanf("%s",str);
    printf("\nThe main string is: %s",str);
    printf("\nEnter the sub string :");
    scanf("%s",substr);
    printf("\nThe sub string is: %s",substr);
    res=brute_force_patterMatch(str,substr);
    if(res==-1){
        printf("\nThe sub string was not found");
        return;
    }
    printf("\nThe substring was found at position: %d",res+1);
    return;
}