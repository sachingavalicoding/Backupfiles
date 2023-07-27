#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,n,search;
    printf("how many elements you want in array");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=1;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("the array elements of are");
      for(i=1;i<n;i++)
    {
    printf("%d",a[i]);
    }
    printf("enter element to search");
    scanf("%d",&search);
    for(i=1;i<n;i++)
    {
    if(a[i]==search)
    {
        printf("the element %d is found at %d position",search,i);
    }
    }

}


