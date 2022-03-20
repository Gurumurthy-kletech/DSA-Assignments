#include <stdio.h>

int main()
{
int n,a[100],i=0;
printf("Enter the number of elemem=nts in array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
search(n,a);
return 0;
}

void search(int n,int a[])
{
int k,j=0,i=0;
printf("Enter the number to be searched\n");
scanf("%d",&k);
for(i=0;i<n;i++)
{
if(a[i]==k)
{
j==1;
}
}
if(j==0)
{
printf("Not present\n");
}
else
{
printf("Present\n");
}
}
