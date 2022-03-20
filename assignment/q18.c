//16)	Write a modular C program to reverse an array.

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
reverse(a,n);
}


void reverse(int *a , int n)
{
int i=0,*b,j=0,k;
b=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)

{
b[i]=a[n-i-1];

}
for(k=0;k<n;k++)
{
printf("%d\t",b[k]);
}
}
