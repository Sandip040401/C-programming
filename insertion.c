#include<stdio.h>
int main()
{
    int i,n,a[100],val,pos;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element and position where to be inputed");
    scanf("%d %d",&val,&pos);
    i=n-1;
    while(i>=pos)
    {
        a[i+1]=a[i];
        i=i-1;
    }
    n=n+1;
    a[pos]=val;
    printf("Insertion: ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}