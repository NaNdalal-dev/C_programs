//Program for selection sort
#include<stdio.h>
int main()
{
int a[100],i,j,sz,min,temp;
//Accepting Array elements
printf("Enter the size of the array :");
scanf("%d",&sz);
printf("Enter %d elements :",sz);
for(i=0;i<sz;++i)
{
scanf("%d",&a[i]);
}

//Logic for selection sort
for(i=0;i<sz-1;i++)
{
min =i;
for(j=i+1;j<sz;++j)
{
if(a[j]<a[min])
{
min=j;
}
if(min!=0)
{
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
}
}

//printing elements after selection sort
printf("Elements after selection sort:\n");
for(i=0;i<sz;++i)
{
printf("%d ",a[i]);
}

return 0;
}
