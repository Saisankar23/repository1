#include<stdio.h>
int main()
{
int i,temp=0,s,n,a[10];
printf("enter the size of an array:\n");
scanf("%d",&n);
printf("enter elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the searched element:");
scanf("%d",&s);
for(i=0;i<n;i++)
{
if(a[i]==s)
temp++;
break;
}
if(temp==0)
{
printf("element found");
}
else
{
printf("element not found");
}
}
