#include <stdio.h>

int main()
{
int n;
printf("Enter the number of entries\n");
scanf("%d",&n);
if(n<=0)
{
    printf("Invalid input\n");
}
printf("Enter any positive or negative numbers\n");
read(n);
return 0;
}


void read (int n)
{
    int a[100],i=0,k=0;
    for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
  k=check(a,n);
}


void check(int a[],int n)
{
    int b[100],c[100],k=0,j=0,i=0;
   for(i=0;i<n;i++)
{
    if(a[i]<0)

{
    b[j]=a[i];
    j++;
}
else
{
    c[k]=a[i];
    k++;
}
}
print(a,b,c,n,j,k);
}


void print(int a[],int b[],int c[],int n,int l,int k)
{
    int i,j;
     printf("\nPositive numbers:\n");
    for (i=0;i<l;i++)
    {
        printf("%d ",b[i]);
    }
    printf("Negative numbers:\n");
    for (i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
}
