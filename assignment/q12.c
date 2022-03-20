#include<stdio.h>

typedef struct array
{
int array[10];
}*arr;

main()
{
    int n;
    printf("Enter the number of arrays\n");
    scanf("%d",&n);

arr a=(struct array*)malloc(n*sizeof(struct array));
read(a,n);
}


void read(arr a,int n)
{
int i=0,m,j=0;
printf("Enter the size of each array\n");
scanf("%d",&m);
for(i=0;i<n;i++)
{
    printf("Array %d",i+1);
for(j=0;j<m;j++)
{
scanf("%d",&a[i].array[j]);
}
}
display(a,m,n);
}


void display(arr a,int m,int n)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d\t",a[i].array[j]);
}
printf("\n");
}
}
