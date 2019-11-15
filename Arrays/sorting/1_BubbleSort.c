#include<stdio.h>
int main()
{
int a[100],i,n,temp,j,pass=1;
printf("Enter the size of array :");
scanf("%d",&n);
printf("Enter %d elements :",n );
for(i=0;i<n;++i)
    {
    scanf("%d",&a[i]);
    }
/*
printf("Before bubble swap ",n );
for(i=0;i<n;++i)
    {
    printf("%d ",a[i]);
    }
*/

for(i=0;i<n;++i)
{

for(j=0;j<n;++j)
{

if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}

}

}

printf("After bubble sort :\n");
for(i=0;i<n;++i)
    {
    printf("%d ",a[i]);
    }


}
