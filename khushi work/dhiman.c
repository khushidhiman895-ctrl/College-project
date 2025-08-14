#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,n,max ;
    printf("enter the no. of elements:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=1;i<=n;i++)
    {
           scanf("%d",&a[i]);
    }
    max=a[1];
    for(i=2;i<=n;i++)
    {
        if (a[i]>max)
        max=a[i];
    }
    printf("largest element is %d",max);


    getch();
    return 0;
}