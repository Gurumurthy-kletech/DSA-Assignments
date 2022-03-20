#include<stdio.h>
main()
{
int n;
printf("Enter the size of array\n");
scanf("%d",&n);
read(n);
}

void read(int n)
{
int i=0,*a;
a=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
sort(a,n);
}



void sort(int *a , int n)
{
int i,j,t=0,k=0;
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j+1]<a[j])
{
t=a[j+1];
a[j+1]=a[j];
a[j]=t;
}
}
}
for(k=0;k<n;k++)
{
printf("%d\t",a[k]);
}
}
