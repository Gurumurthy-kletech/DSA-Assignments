
#include<stdio.h>
main()
{
int n=3;
read(n);
}


void read(int n)
{
int i,*a;
a=(int*)malloc(3 * sizeof(int));
a[0]=6;
a[1]=4;
a[2]=8;
salary(a,n);
}

void salary(int *a, int n)
{
int i=0;
for (i=0;i<3;i++)
{
if(a[i]>=5 && a[i]<=7)
{
printf("%d\n",10600+1060);
}
else if(a[i]>=8 && a[i]<=10)
{
printf("%d\n",21300+2130);
}
else if(a[i]>10)
{
printf("%d\n",32100+3210);
}
else
{
printf("Invalid input\n");
}
}
}
